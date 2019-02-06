#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Utils.h"
 

void cpp_class3::fillArray(void * myArray,int size,cpp_class3::Type arrayType) {
	if (!myArray) {
		return;
	}
	const bool isChar = arrayType == cpp_class3::CHAR;
	srand(static_cast<unsigned int>(time(NULL)));
	if (isChar) {
		char * arrayCasted = reinterpret_cast<char *>(myArray);
		for (char a = 0; a<size; a++) {
			arrayCasted[a] = (rand()% MAX_CHAR)-128;
		}
		cpp_class3::printCharArray(arrayCasted, size, false);
	}
	else {
		int * arrayCasted = reinterpret_cast<int *>(myArray);
		for (char a = 0; a<size; a++) {
			arrayCasted[a] = rand();
		}
		cpp_class3::printIntArray(arrayCasted,size);
	}

	
}

void cpp_class3::printCharArray(const char * charArray, int size,bool bPrintWords)
{
	for (char a = 0; a<size; a++) {
		if (bPrintWords) {
			std::cout << charArray[a] << " ";
		}
		else {
			std::cout << static_cast<short>(charArray[a]) << " ";
		}
		
	}
	std::cout<<std::endl;
}

void cpp_class3::printIntArray(const int * intArray, int size)
{
	for (char a = 0; a<size; a++) {
		std::cout << intArray[a] << " ";
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

void cpp_class3::toggleCharCase(char * myCharArray, int size)
{
	const char charOffset = 'a' - 'A';
	for (char a = 0;a< size;a++) {
		if (isCapital(myCharArray[a])) {
			myCharArray[a] += charOffset;
		} else{
			myCharArray[a] -= charOffset;
		}
	}
	printCharArray(myCharArray,size,true);
}

void cpp_class3::paritySort(int * myArray, int size, int * pairNumbers, int * oddNumbers)
{
	int pairCount=0, oddCount = 0;
	for (char a = 0;a< size;a++) {
		if (myArray[a]%2==0) {
			pairCount++;
		}
		else {
			oddCount++;
		}
	}
	*pairNumbers=pairCount ;
	*oddNumbers= oddCount;
}

bool cpp_class3::isArrayConsecutive(int * myArr, int size)
{
	for (char a = 1;a<size;a++) {
		if (myArr[a]-myArr[a-1] != 1) {
			return false;
		}
	}
	return true;
}

bool cpp_class3::areConsecutives(int * myArr1, int size1, int * myArr2, int size2)
{
	return isArrayConsecutive(myArr1,size1) && isArrayConsecutive(myArr2,size2) && myArr2[0] - myArr1[size1 - 1] == 1;
}

bool cpp_class3::isReverseOf(short * myArr1, int size1, short * myArr2, int size2)
{
	if (size1!=size2) {
		return false;
	}
	for (char a = 0;a<size1;a++) {
		if (myArr1[a]!=myArr2[size1-1-a]) {
			return false;
		}
	}
	return true;
}

bool cpp_class3::areThereDuplicates(int * myArr, unsigned int sizeCheck)
{
	for (unsigned char a = 0;a<sizeCheck;a++) {
		for (unsigned char b = 0; b<sizeCheck; b++) {
			if (a!=b && myArr[b] == myArr[a]) {
				return true;
			}
		}
	}
	return false;
}



