#include <stdio.h>
// switch statements are used to to switch between cases in case the variable and expression is in that exact block of code
int main(){
    int number;
    printf("Enter the number from 1 to 7: ");
    scanf("%d",&number);

/*switch(number){
    case 1:
    printf("the day is sunday");
    break;
    case 2:
    printf("the day is tuesday");
    break;
    case 3:
    printf("the day is wednesday");
    break;
    case 4:
    printf("the day is thursday");
    break;
    case 5:
    printf("the day is friday");
    break;
    case 6:
    printf("the day is saturday");
    break;
    default:// take keen notice on the semi column of this code
    printf("invalid number");
    
}
return 0;*/
//switch with multiple cases
switch (number){
case 1:
case 2:
case 3:
case 4:
case 6:
printf("weekday");
break;
case 7:
printf("weekend");
break;
}
return 0;
}// note there should be space between case and the number