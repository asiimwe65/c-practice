#include<stdio.h>
/*int main(){
    int sum=0;
 while(sum<5){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    int product=sum+number;
    
    if(number<2){
        break;
    }
    printf("%d\n",product);
 } 
 return 0;  
}*/
// continue iteration skips that condition and continues with the rest until it reaches satiety
#include <stdio.h>

int main(){
    int number =0;
    for(int i= 0;i<11;i++){
       int number=number+1;
        if(number==2){
            continue;
        }
        printf("after adding %d,number=%d\n",i,number);

    }
    printf("the final answer is %d\n",number);
    return 0;
}
