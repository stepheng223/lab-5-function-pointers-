#include <stdio.h>
#include <stdlib.h>

// ---- Operations ----
int add(int a, int b) {
    printf("Adding 'a' and 'b'\n");
    return a + b;
}

int sub(int a, int b) {
    printf("Subtracting 'b' from 'a'\n");
    return a - b;
}

int mul(int a, int b) {
    printf("Multiplying 'a' and 'b'\n");
    return a * b;
}

int divide(int a, int b) {
    printf("Dividing 'a' by 'b'\n");
    return a / b;
}

int quit(int a, int b) {
    exit(0);
    return 0;  // unreachable but required for type consistency
}

// ---- MAIN ----
int main()
{
    int a = 6;
    int b = 3;
    char choice;

    // Function pointer table — indexed by '0', '1', '2', '3', '4'
    int (*ops[5])(int, int) = { add, sub, mul, divide, quit };

    printf("Operand 'a' : %d | Operand 'b' : %d\n", a, b);
    printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");

    scanf(" %c", &choice);

    int index = choice - '0';    // convert char 'X' → int X
    int result = ops[index](a, b);

    printf("x = %d\n", result);

    return 0;
}
