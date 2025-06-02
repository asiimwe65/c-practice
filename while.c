#include <stdio.h>
/*int main(){
int count=1;
while(count<5){
    printf("\nthe loop is cool");
    // to show the amount of counts in each iteration
    printf("\ncount %d",count);
    count=count+1;

}
return 0;
}*/
// creation of the multiplication table using the while loop
/*int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    int count=1;
    while(count<=10){
        int product=number*count;
        
        printf("%d*%d=%d\n",number,count,product);// this shows the number chosen the count and the the result of the product
        count=count+1;
    }
return 0;

}*/
// do while loop inversion of the while loop let's say while(condition){body}here its instead do{body}while(condition)
int main(){
    int count=1;
    do{
        printf("%d\n",count);
        count=count+1;

    }while(count<=5);
    return 0;
}