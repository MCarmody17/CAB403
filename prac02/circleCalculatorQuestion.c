#include <stdio.h>
#define PI 3.142 // Object like macro

int main(int argc, char *argv[]) {
	float userInput = 0;
	float area = 0;
	for (int i =0; i < 5; i++) {
		printf("\nEnter the radius of circle number %d- ", i+1);
		scanf("%f",&userInput);
		area = PI * (userInput * userInput);
		printf("The area of the circle is: %f", area);

		// Get user input
		// Output the area of the circle - limit to 2 decimal places

	}
	return 0;
}
