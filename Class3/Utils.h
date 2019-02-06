#ifndef UTILS_H
#define UTILS_H
#define MAX_CHAR 255

namespace cpp_class3 {
	enum Type {
		CHAR = 0,
		INT = 1
	};

	void fillArray(void * ,int ,Type);
	void printCharArray(const char * ,int ,bool);
	void printIntArray(const int *, int);
	bool isLetter(char);
	bool isCapital(char);
	void toggleCharCase(char *, int);
	void paritySort(int *,int,int*,int*);
	bool isArrayConsecutive(int*,int);
	bool areConsecutives(int* , int , int*,int);
	bool isReverseOf(short*,int,short*,int);
	bool areThereDuplicates(int*,unsigned int);
}


#endif // !UTILS_H

