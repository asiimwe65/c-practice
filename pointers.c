# include <stdio.h>
/*int main(){
    int age=25;
    int*ptr=&age;
    *ptr=36;
    printf("%d",age);
}
// the * should be next to the the pointer (int *ptr) and it shouldnot be like this (int*  ptr)


// pointers and arrays
int main(){
    int b[5]={1,2,3,4,5};
    for (int i=0;i<5;++i){
        printf("%d=%p\n",b[i],&b[i]);//&b[i]prints the address of each element  in the array

    }
    return 0;
}
// access array elements using pointers
//pointers and functions

void FindNumber(int* num){
    *num=39;

}
int main(){
    int number =21;
    FindNumber(&number);
    printf("%d",number);
    return 0;

}

void FindSquare(int* number){
    int square = *number * *number;      // take caution where * is !!!!!!
    *number = square;
}
 int main(){
     int number= 12;
     FindSquare(&number);
     printf("The square of the number is %d",number);
     return 0;
 }*/
 // return pointers from a function
 int* findSquare(int* number){
    int square = *number * *number;
    *number = square;
    return number;
}
 int main(){
     int number= 2;
     int*  result=findSquare(&number); // there should be a * at the int result
     printf("The square of the number is %d",*result);
     return 0;
 }
