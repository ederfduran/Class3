#include <cassert>
#include "Utils.h"
#include "TestUtils.h"


void cpp_class3_test::testToggleCharCase()
{
	char mockArray[10] = { 'h','E','l','l','O','W' ,'o' ,'r' ,'l' ,'d' };
	char ExpectedResult[10] = { 'H','e','L','L','o','w' ,'O' ,'R' ,'L' ,'D' };
	cpp_class3::toggleCharCase(mockArray,10);
	for (unsigned int i = 0;i<10;i++) {
		assert(mockArray[i] == ExpectedResult[i]);
	}
}

void cpp_class3_test::testParitySort()
{
	int mockArray[10] = {-13,26,-4,16,144,-678,256,78,21,-33};
	int expectedResult[10] = {256,144,78,26,21,16,-4,-13,-33,-678};
	int pairNumbers = 0, oddNumbers=0;
	cpp_class3::paritySort(mockArray,10,&pairNumbers,&oddNumbers);
	assert(pairNumbers==7&& oddNumbers==3);
	for (unsigned int i = 0;i<10;i++) {
		assert(expectedResult[i]==mockArray[i]);
	}
}

void cpp_class3_test::testAreConsecutives()
{
	int mockArray[10] = {4,5,6,7,8,9,10,11,12,13};
	int mockArray2[3] = { 14,15,16};
	const bool areConsecutives=cpp_class3::areConsecutives(mockArray,10,mockArray2,3);
	assert(areConsecutives);
}

void cpp_class3_test::testIsReverseOf()
{
	short mockArray1[5] = {14,552,73,86,24};
	short mockArray2[5] = {24,86,73,552,14};
	assert(cpp_class3::isReverseOf(mockArray1, 5, mockArray2, 5));
}

void cpp_class3_test::testAreThereDuplicates()
{
	int mockArray[] = {12, 3, 52, 63, 12};
	assert(cpp_class3::areThereDuplicates(mockArray, 5));
}
