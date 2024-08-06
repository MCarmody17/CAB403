#include <stdio.h>

int main(void) {
	char fullString[30];
	printf("\nPlease enter a String: ");
	fgets(fullString, sizeof(fullString), stdin);
	printf("Hello, you said: %s", fullString);
}