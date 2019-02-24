#include <cassert>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Utils.h"
 

void cpp_class3::fillArray(void * myArray,unsigned int length,cpp_class3::Type arrayType) {
	
	assert(myArray);
	const bool isChar = arrayType == cpp_class3::CHAR;
	srand(static_cast<unsigned int>(time(NULL)));
	if (isChar) {
		char * arrayCasted = reinterpret_cast<char *>(myArray);
		for (unsigned int i = 0; i<length; i++) {
			arrayCasted[i] = (rand()% MAX_CHAR)-128;
		}
		cpp_class3::printCharArray(arrayCasted, length, false);
	}
	else {
		int * arrayCasted = reinterpret_cast<int *>(myArray);
		for (unsigned int i = 0; i<length; i++) {
			arrayCasted[i] = rand();
		}
		cpp_class3::printIntArray(arrayCasted,length);
	}

	
}

void cpp_class3::printCharArray(const char * charArray,unsigned int length,bool bPrintWords)
{
	assert(charArray);
	for (unsigned int i = 0; i<length; i++) {
		if (bPrintWords) {
			std::cout << charArray[i] << " ";
		}
		else {
			std::cout << static_cast<short>(charArray[i]) << " ";
		}
		
	}
	std::cout<<std::endl;
}

void cpp_class3::printIntArray(const int * intArray, unsigned int length)
{
	assert(intArray);
	for (unsigned int i = 0; i<length; i++) {
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;

}

bool cpp_class3::isLetter(char letter)
{
	return isCapital(letter) || (letter >= 'a' && letter <= 'z');
}

bool cpp_class3::isCapital(char letter)
{
	return letter >= 'A' && letter <= 'Z';
}

void cpp_class3::toggleCharCase(char * myCharArray,unsigned int length)
{
	assert(myCharArray);
	const char charOffset = 'a' - 'A';
	for (unsigned int i = 0;i< length;i++) {
		assert(isLetter(myCharArray[i]));
		if (isCapital(myCharArray[i])) {
			myCharArray[i] += charOffset;
		} else{
			myCharArray[i] -= charOffset;
		}
	}
	printCharArray(myCharArray,length,true);
}

void cpp_class3::paritySort(int * myArray, unsigned int length, int * pairNumbers, int * oddNumbers)
{
	assert(myArray);
	sortHightToLow(myArray,length);
	int pairCount=0, oddCount = 0;
	for (unsigned int i = 0;i< length;i++) {
		if (myArray[i]%2==0) {
			pairCount++;
		}
		else {
			oddCount++;
		}
	}
	*pairNumbers=pairCount ;
	*oddNumbers= oddCount;
}

void cpp_class3::swap(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b= temp;
}

void cpp_class3::sortHightToLow(int * myArray, unsigned int length)
{
	assert(myArray);
	for (unsigned int i = 1; i < length; ++i) {
		for (unsigned int j = 0; j < (length - i); ++j) {
			if (myArray[j] < myArray[j + 1]) {
				swap(&myArray[j], &myArray[j + 1]);
			}
		}
	}
}

bool cpp_class3::isArrayConsecutive(int * myArr, unsigned int length)
{
	for (unsigned int i = 1;i<length;i++) {
		if (myArr[i]-myArr[i-1] != 1) {
			return false;
		}
	}
	return true;
}

bool cpp_class3::areConsecutives(int * myArr1, unsigned int length1, int * myArr2,unsigned int length2)
{
	assert(myArr1&&myArr2);
	return isArrayConsecutive(myArr1,length1) && isArrayConsecutive(myArr2,length2) && myArr2[0] - myArr1[length1 - 1] == 1;
}

bool cpp_class3::isReverseOf(short * myArr1,unsigned int length1, short * myArr2,unsigned int length)
{
	assert(myArr1&&myArr2);
	if (length1!=length) {
		return false;
	}
	for (unsigned int i = 0;i<length1;i++) {
		if (myArr1[i]!=myArr2[length1-1-i]) {
			return false;
		}
	}
	return true;
}

bool cpp_class3::areThereDuplicates(int * myArr, unsigned int length)
{
	assert(myArr);
	for (unsigned int i = 0;i<length;i++) {
		for (unsigned int j = i+1; j<length; j++) {
			if (myArr[j] == myArr[i]) {
				return true;
			}
		}
	}
	return false;
}



