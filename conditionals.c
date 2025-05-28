#include <stdio.h>
#include<stdbool.h>
int main(){
    int age;
    printf("please enter your age: ");
    scanf("%d",&age);
    
   /*if(age>=18){
        printf("the age is greater than 18");

    }
    else{
        printf("you are not eligible to vote");
    }
    return 0;*/
    // else if is used to put more if conditions
    if(age>120){
        printf("invalid age");
    }
    else if(age<0){
        printf("invalid age");}
    else if(age>=18){
        printf("the age is greater than 18");

    }
    else if(age<18){
        printf("you are not eligible to vote");
    }
    return 0;     
}