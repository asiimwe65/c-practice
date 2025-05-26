#include <stdio.h>
int main(){
    int age= 25;
    printf("Age :%d", age);
    age=36;
    printf("\nNew age: %d",age);
    double number = 12.45;
    printf("\n decimal number : %.2lf",number);
    float number1=9.9f;
    printf("\n float number: %.1f",number1);
    char character='z';
    printf("\nstring letter:  %c", character);
    printf("\n int size: %zu",sizeof(age));
    printf("\n double size: %zu",sizeof(age));
    return 0;
}