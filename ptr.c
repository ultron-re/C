#include <stdio.h>

int main()
{
    float temp = 98.8;

    printf("Address of temp variable: %p\n", &temp);

    float *add_temp;
    add_temp = &temp;
    printf("Address stored in pointer: %p\n", add_temp);
    printf("Value pointed to by pointer: %f\n", *add_temp);

    float **add_add_temp;
    add_add_temp = &add_temp;
    printf("Address stored in pointer to pointer: %p\n", add_add_temp); 
    printf("Value pointed to by pointer to pointer: %f\n", **add_add_temp);
    return 0;
}