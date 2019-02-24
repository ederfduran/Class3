#ifndef UTILS_H
#define UTILS_H
#define MAX_CHAR 255

namespace cpp_class3 {
	enum Type {
		CHAR = 0,
		INT = 1
	};

	void fillArray(void * ,unsigned int ,Type);
	void printCharArray(const char * ,unsigned int ,bool);
	void printIntArray(const int *, unsigned int);
	bool isLetter(char);
	bool isCapital(char);
	void toggleCharCase(char *, unsigned int);
	void paritySort(int *,unsigned int,int*,int*);
	void swap(int*,int*);
	void sortHightToLow(int*,unsigned int length);
	bool isArrayConsecutive(int*,unsigned int);
	bool areConsecutives(int* ,unsigned int , int*,unsigned int);
	bool isReverseOf(short*,unsigned int,short*,unsigned int);
	bool areThereDuplicates(int*,unsigned int);
}


#endif // !UTILS_H

