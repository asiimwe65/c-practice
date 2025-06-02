#include <stdio.h>
/*int main(){
    for(int i=0; i<10; i++){
       // printf("%d ",i);
        printf("emergency condition\n ");
    }
    return 0;
}*/
/*int main(){
    int sum=0;
    for(int i=0;i<100;i++){
        sum=sum+i;
    }
    printf("%d",sum);// the print of the result is outside the for loop block 
    return 0;
}*/
// sum of even numbers
int main(){
    int sum=0;
    for(int i=2;i<1000;i=i+2){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}