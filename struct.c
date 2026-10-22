#include<stdio.h>

struct student {
    char name[50];
    int id;
    char grade;
    float percentage;
};

int main(){
    struct student s1 = {"Aran R", 1122 , 'A', 85.5};
    struct student s2 = {"John D", 1123 , 'B', 75.0};

    printf("-------------Student 1 Details:------------\n");
    printf("Name: %s\n", s1.name);
    printf("ID: %d\n", s1.id);
    printf("Grade: %c\n", s1.grade);
    printf("Percentage: %.2f\n", s1.percentage);

    printf("\n-------------Student 2 Details:------------\n");
    printf("Name: %s\n", s2.name);
    printf("ID: %d\n", s2.id);
    printf("Grade: %c\n", s2.grade);
    printf("Percentage: %.2f\n", s2.percentage);

    printf("\nSize of student structure: %lu bytes\n", sizeof(struct student));
    return 0;
}