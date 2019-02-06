#include <cassert>
#include "Utils.h"
#include "TestUtils.h"


void cpp_class3_test::testToggleCharCase(char * myCharArr, int size)
{
	for (char a=0;a<size;a++) {
		assert(cpp_class3::isLetter(myCharArr[a]));
	}
	cpp_class3::toggleCharCase(myCharArr,size);
}

void cpp_class3_test::testParitySort(int * myArray, int size, int * pairNumbers, int * oddNumbers)
{
	assert(myArray&&pairNumbers&&oddNumbers);
	cpp_class3::paritySort(myArray,size,pairNumbers,oddNumbers);
}

void cpp_class3_test::testFillArray(void * myArray, int size, cpp_class3::Type arrayType)
{
	assert(myArray);
	cpp_class3::fillArray(myArray,size,arrayType);
}

bool cpp_class3_test::testAreConsecutives(int * myArr1, int size1, int * myArr2, int size2)
{
	assert(myArr1&& myArr2);
	return cpp_class3::areConsecutives(myArr1,size1,myArr2,size2);
}

bool cpp_class3_test::testIsReverseOf(short * myArr1, int size1, short * myArr2, int size2)
{
	assert(myArr1 && myArr2);
	return cpp_class3::isReverseOf(myArr1,size1,myArr2,size2);
}

bool cpp_class3_test::testAreThereDuplicates(int * myArr, unsigned int sizeCheck)
{	
	assert(myArr);
	return cpp_class3::areThereDuplicates(myArr,sizeCheck);
}
