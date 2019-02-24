#include <iostream>
#include "TestUtils.h"
#include "Utils.h"


namespace cpp_class3 {
	namespace testVars {
		char testArray[10];
	}
}

using namespace cpp_class3::testVars;

int main() {
	cpp_class3::fillArray(testArray, 10, cpp_class3::CHAR);
	cpp_class3_test::testToggleCharCase();
	cpp_class3_test::testParitySort();
	cpp_class3_test::testAreConsecutives();
	cpp_class3_test::testIsReverseOf();
	cpp_class3_test::testAreThereDuplicates();
	std::cin.get();
	return 0;
}