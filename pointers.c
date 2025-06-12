# include <stdio.h>
int main(){
    int age=25;
    int*ptr=&age;
    *ptr=36;
    printf("%d",age);
}
// the * should be next to the the pointer (int *ptr) and it shouldnot be like this (int*  ptr)