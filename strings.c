#include <stdio.h>
/*int main(){
    char p[]="programiz";

    printf("%s",p);
}*/



int main(){
    char p [20];// an array of character and size 20 letters
    printf("Enter your name:");
    scanf("%s",p);// we dont put a pointer because it is an array
    printf("%s",p);
    return 0;
}