#include <stdio.h>

// use void when the function doesn't return a value
void greet(){
    printf ("Good morning");
}
void calculatesquare(int number){        //you have to place a parameter  in the function unit
    int square=number*number;
    printf("\nThe square of %d is %d\n", number,square);
}
void addNumbers(int number1,int number2){
    int sum =number1+number2;
    printf("\n the sum of %d and %d is %d\n ",number1,number2,sum);
}
int multiplicationNumbers(int num1, int num2){       //the void is removed if you want to return a value
    int multiplication=num1* num2;
    return multiplication;

}

int main(){
    greet();// here l am calling the function
    calculatesquare(5);
    addNumbers(5,5);
    int result = multiplicationNumbers(6,4);
    printf("\nthe final result of multiplication is %d\n",result);
    return 0;
}
