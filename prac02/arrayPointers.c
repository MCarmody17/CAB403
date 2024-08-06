#include <stdio.h>


int main(void) { 
    char *cityPtr[4] = {"Toowong", "Chermside", "Taringa", "Indooroopilly"};
    printf("\n\n");
    
    // Iterate over each city pointer
    for (int i = 0; i < 4; i++) {
        char *ptr = cityPtr[i];  // Point to the current city name
        while (*ptr != '\0') {
            printf("%c", *ptr);
            ptr++;
        }
        printf("\n");  // Print a newline after each city name
    }
    
    printf("\n\n");
    return 0;
}