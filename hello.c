#include <stdio.h>
#include <string.h>

/*
 * Function Prototypes
 * These tell the compiler what functions exist before main() uses them.
 */
void get_string(const char *prompt, char *output, int size);
int add_numbers(int a, int b);
int subtract_numbers(int a, int b);
int multiply_numbers(int a, int b);
int divide_numbers(int a, int b);

int main() {
    printf("Hello, World!\n");

    // Example usage of get_string
    char name[100];
    get_string("Enter your name: ", name, sizeof(name));
    printf("Hello, %s!\n", name);

    // Example usage of arithmetic functions
    int a = 10, b = 5;

    printf("\n=== Arithmetic Demo ===\n");
    printf("%d + %d = %d\n", a, b, add_numbers(a, b));
    printf("%d - %d = %d\n", a, b, subtract_numbers(a, b));
    printf("%d * %d = %d\n", a, b, multiply_numbers(a, b));
    printf("%d / %d = %d\n", a, b, divide_numbers(a, b));

    return 0;
}

/*
 * Reads a line of input from the user safely.
 * - prompt: message to show the user
 * - output: where to store the user input
 * - size: size of the output buffer
 */
void get_string(const char *prompt, char *output, int size) {
    printf("%s", prompt);
    fgets(output, size, stdin);

    // Remove trailing newline character if it exists
    size_t len = strlen(output);
    if (len > 0 && output[len - 1] == '\n') {
        output[len - 1] = '\0';
    }
}















/*
 * Adds two integers.
 */
int add_numbers(int a, int b) {
    return a + b;
}

/*
 * Subtracts the second number from the first.
 */
int subtract_numbers(int a, int b) {
    return a - b;
}

/*
 * Multiplies two integers.
 */
int multiply_numbers(int a, int b) {
    return a * b;
}

/*
 * Divides a by b.
 * Includes simple protection from division by zero.
 */
int divide_numbers(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}
