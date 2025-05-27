#include <stdio.h>
#include <stdbool.h>
int main(){
    bool value =(5>9);// greater operator
    printf("%d",value);
    bool q =(5==9);// equal operator
    printf("\n %d",q);
    bool z=(5!=9);// not equal operator
    printf("\n %d",z);
    //  logical operators
    // and operators &&
    int age =18;
    double me=9.0;
    bool zo=(age>=18)&&(me<10);
    printf("\n%d",zo);
    // or operator represented as || in c which returns true if one of them is true
     int ag =18;
    double m=9.0;
    bool ze=(ag>=18)||(m<10);
    printf("\n%d",ze);
    // Not operator known as ! brings the opposite of true or false
     int ad =18;
    bool zd=!(ag>=18);
    printf("\n%d",zd);
    return 0;

}