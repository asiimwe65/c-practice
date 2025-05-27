#include <stdio.h>
int main(){
    int x=8;
    int result = x+7;
    printf("the result %d",result);
    

     double p=2.13;
     printf("\nthe second result is %.2lf",p+7);//addition
     //division we use the ssign / but we use the double datatype tbecause we can get decimals
     double z=13;
     printf("\nThe third result is %.2lf",z/2);
     
     // finding the modular operator you can use the inter datatype
    int j=9;
    printf("\n the remainder to 9 divided by 7 is %d",j%7);
    // increment and decrement operators
    int h=5;
    printf("\n the 4th result is %d",++h);
    printf("\n the 5th result is %d",--h);
    // multiple operators in one line
    double n=12/6*3-1;
    printf("\n the 6th result is %.0lf",n);
    
    //type conversion
    //explicit conversion
    double v=9.999;
    int s=9;
    int w =(int)v +s;
    printf("\nw is %d",w);
    
    float y= 7.0;
    float q=14.0;
    int f=q/y;
    printf("\nthe 8th result is %d",f);
    return 0;
}