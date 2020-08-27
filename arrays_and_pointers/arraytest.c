#include <stdio.h>
#include <string.h>

/*
 *	HOMEWORK
 *	Create an array of floating point values (maybe 10 or so)
 *
 *	Write a function to get a single value from a passed-in array
 *
 *	print out that value
 *
 *	email the source code to me by TUESDAY 8AM
 *
 * */


int getNumber(int index) {

	int digits[6] = { 2, 4, 6, 8, 1, 3 };

	return digits[index];

}

int getNumberFromArray(int* array, int index) {

	return array[index];

}


int main(int argc, char **argv) {

	int numbers[5] = { 1, 2, 3, 4, 5 };
	int value = 42;
	float fValue = 4.0;

	printf("the float value is %f\n", fValue);

	char *name = "rusxell";
	char* realname = "russell";

	int* ptr;
	
	ptr = numbers;

	printf("The contents of numbers is %d\n", getNumberFromArray(ptr, 3));
	
	
	return 0;
}
