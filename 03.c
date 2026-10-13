#include <stdio.h>

int sum(int a, int b);  
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);     

int main() {
    int n1, n2;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    int num=sum(n1, n2);
    printf("Sum: %d\n", num);
    printf("Subtraction: %d\n", sub(n1, n2));
    printf("Multiplication: %d\n", mul(n1, n2));    
    printf("Division: %d\n", div(n1, n2));
    return 0;
}

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}
int div(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0; // Return 0 or handle the error as needed
    }
}