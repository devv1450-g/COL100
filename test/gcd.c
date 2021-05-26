#include <stdio.h>

#define MAXVALS 100

// function declarations
int my_atoi(char str[]);
int gcd(int A, int B);

int main(int argc, char* argv[]) {
	int i, numbers[MAXVALS], current_gcd;

	printf("Number of arguments = %d\n", argc);
	for(i = 1; i < argc && i <= MAXVALS; i++) {
		printf("from inside main: address of argv[%d] = %p\n", i, argv[i]);

		// convert string -> integer
		numbers[i - 1] = my_atoi(argv[i]);
		printf("arg %d = %s, %d\n", i, argv[i], numbers[i - 1]);
	}

	printf("calling gcd with %d, %d\n", numbers[0], numbers[1]);
	printf("from inside main: address of numbers = %p\n", &numbers[0]);
	current_gcd = gcd(numbers[0], numbers[1]);
	for(i = 2; i < argc - 1; i++) {
		printf("current_gcd = %d, next number = %d\n", current_gcd, numbers[i]);
		current_gcd = gcd(current_gcd, numbers[i]);
	}

	printf("gcd = %d\n", current_gcd);

	return current_gcd;
}

int my_atoi(char str[]) {
	int i = 0, j = 0, n = 0, places = 1;
	printf("from inside my_atoi: address of str = %p, address of i = %p\n", &str[0], &i);

	// find the length of the string
	while(str[i])
		i++;

	// read string back -> front to convert to a decimal value
	for(j = i - 1; j >= 0; j--) {
		n += ((str[j] - '0') * places);
		places *= 10;
	}

	return n;
}

// compute the GCD of two integers
int gcd(int A, int B) {
	int  temp;
	printf("from inside gcd: address of A = %p, address of B = %p\n", &A, &B);
	while ((B % A) != 0)  {
		temp = B % A;
		B = A;
		A = temp;
	}
	return A;
}
