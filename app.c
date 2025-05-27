#include <stdio.h>
int main(){
    double year;
    char alphabet;

    printf("Enter your age: ");

    scanf("%lf", &year);

    printf("Your age is %2lf\n",year);

    printf("\nEnter an alphabet letter: ");

    scanf(" %c",&alphabet);

    printf("The alphabet you have chosen is %c",alphabet);

    return 0;
}