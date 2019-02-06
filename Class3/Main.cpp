#include <iostream>
#include "TestUtils.h"
#include "Utils.h"


namespace cpp_class3 {
	namespace testVars {
		char testWord[10] = { 'h','E','l','l','O','W' ,'o' ,'r' ,'l' ,'d' };
		char testArray[10];
		int tesSorttArray[] = {1,2,3,4,5,6,7,8,9,10};
		int pairC=0, oddC = 0;
		int * p = nullptr;
		int consecutiveArr[] = {11,12};
		short testReverse1[] = {1,2,3,4,5};
		short testReverse2[] = { 5,4,3,2,1 };
	}
}

using namespace cpp_class3::testVars;

int main() {
	cpp_class3_test::testFillArray(testArray,10,cpp_class3::CHAR);
	cpp_class3_test::testToggleCharCase(testWord,10);
	cpp_class3_test::testParitySort(tesSorttArray,10,&pairC,&oddC);
	std::cout << "PAIR COUNT IS : "<< pairC << "  ODD COUNT IS : "<< oddC << std::endl;
	std::cout << "ARE CONSECUTIVES?  " << cpp_class3_test::testAreConsecutives(tesSorttArray,10,consecutiveArr,2)<< std::endl;
	std::cout << "IS REVERSE OF ?  " << cpp_class3_test::testIsReverseOf(testReverse2, 5, testReverse1, 5) << std::endl;
	std::cout << "ARE THER DUPLICATES ?  "<< cpp_class3_test::testAreThereDuplicates(tesSorttArray, 10) << std::endl;
	std::cin.get();
	return 0;
}