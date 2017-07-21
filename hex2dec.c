#include <stdio.h>

// function used to convert string of hexadecimal digits to corresponding int value
int htoi(char[]);

int main(void){

	// declare variables
	char text[10];
	int a;

	// prompt user to enter hexa decimal value
	printf("Enter hexadecimal string: \n");
	scanf("%s", text);
	// call function htoi
	a = htoi(text);

	// display the output
	printf("\nInteger value for given hexa is: %d\n", a);
	return 0;
}

// function definition htoi - to convert the hexadecimal
// string into integer number
int htoi(char line[]){

	// declare variables
	int digit, i = 0, h, x;

	if(line[i] == '0'){

		++i;
		// if line[i] is x or X, increase i by 1
		if(line[i] == 'X' || line[i] == 'x')
			++i;
	}
	x = 0;
	h = 1;
	for(; h == 1; ++i){

		// if line[i] element in between 0 to 9, assign line[i] corresponding hexdigit
		if(line[i] >= '0' && line[i] <= '9')
			digit = line[i] - '0';
		// if line[i] element in between a to f, assign line[i] corresponding hexdigit
		else if(line[i] >= 'a' && line[i] <= 'f')
			digit = line[i] - 'a' + 10;
		// if line[i] element in between A to F, assign line [i] corresponding hexdigit
		else if(line[i] >= 'A' && line[i] <= 'F')
			digit = line[i] - 'A' + 10;
		else
			h = 0;

		// check if h is a 1 calculate
		if(h == 1)
			x = 16 * x + digit;
	}
	return x;
}
