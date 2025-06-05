#include <stdio.h>

// Function prototype
int sum(int n);  // we need a function prototype because C is a top-down compiled language,
//  which means the compiler reads code from top to bottom. 
// If you try to call a function before it's defined,
//  the compiler will give an error—unless you tell it about the function first using a prototype.

int main() {
    int number;
    int result;

    printf("Enter the number: ");
    scanf("%d", &number); // Use & to store input in variable

    result = sum(number); // Call the function and store result

    printf("\n%d\n", result); // Print the result

    return 0;
}

// Recursive function definition
int sum(int n) {
    if (n != 0) {
        return n + sum(n - 1); // Recursive call
    } else {
        return 0; // Base case
    }
}
