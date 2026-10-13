#include <stdio.h>

int even_or_odd(int num);

int main() 

{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (num < 1) 
    {
        printf("Please enter a positive integer.\n");
        return 1; 
    }
    int result = even_or_odd(num);

    if (result == 1) 
    {
        printf("%d is even.\n", num);
    } 
    else 
    {
        printf("%d is odd.\n", num);
    }

    return 0;
}

int even_or_odd(int num) 
{
    if (num % 2 == 0) 
    {
        return 1; 
    } 
    else 
    {
        return 0; 
    }
}