#include <stdio.h>
int main (){
   /* int age=15;
    
    (age>18)?printf("you can vote") : printf("you are not eligible to vote");//make sure if is not there anywhere in this line because that is the substitute
    return 0;*/
    //turning a tenary operator to a variable and use it later
    char vok='+';
    int num1=8;
    int num2=9;

    int result =(vok =='+') ? (num1+num2) : (num2-num1);
    printf("%d",result);

    
    return 0;

}