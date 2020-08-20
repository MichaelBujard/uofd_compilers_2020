#include <stdio.h>


int isOdd(int number) {

	if (number == 0) {
		return 1;
	} else if (number == 1) {
		return 0;
	} else if (number == 2) {
		return 1;
	} else if (number == 3) {
		return 0;
	} 

	return 0;

}

int isOdd2(int number) {

	switch (number) {
		case 0: return 1;
		case 1: return 0;
		case 2: return 1;
		case 3: return 0;
		case 4: return 1;
	}

	return 0;

}

int isOdd3(int number) {

	return number % 2;

}

int isEven(int number) {

	return (number % 2 == 0) ? 1 : 0;

}


int isOdd4(int number) {

	return number &0x1;

}






int main(int argc, char **argv) {

	int year = 2020;
	printf("hello, compilers %d!\n", year);

	int checkValue = 5;
	int odd = isOdd(checkValue);
	printf("checkvalue of %d is odd? %d\n", checkValue, odd);

	return 0;

}
