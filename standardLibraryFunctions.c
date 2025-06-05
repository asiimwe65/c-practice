// math.h file helps us to carry out math functions in c programming like sqrt is used for finding the squareroot of a number and cbrt is for cube root
# include <stdio.h>
# include <math.h>
int main(){
    int  number =144;
    printf("The square root of a number is %.2lf",sqrt(number));
    int a=5;
    int b=2;
    int result =pow(a,b);//this makes it become 5 power 2
    printf("\nThe power of %d is %lf",a,result);
    return 0;
}