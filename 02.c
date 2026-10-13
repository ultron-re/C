#include <stdio.h>

int main() 
{
   /* char name[20]= "ultron";
    int age = 24;
    char gender = 'M';
    float height = 5.9;
    double pi = 3.14159265359;
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Gender: %c\n", gender);
    printf("Height: %.1f\n", height);
    printf("Value of pi: %f\n", pi);
    */
    char a = -128;
    printf("Character: %c\n", a);
    printf("Character: %d\n", a);
    printf("%zu\n", sizeof(a));

    unsigned int b = -1;
    printf("Unsigned Integer: %u\n", b);
    return 0;
}