#include <stdio.h>
int main(){
int num1,num2,temp;
printf("enter the two digits: ");
scanf("%d %d",&num1,&num2);
int *ptr1=&num1;
int *ptr2=&num2;
temp=num1;
num1=num2;
num2=temp;
printf("interchanged values: %d and %d",*ptr1,*ptr2);
return 0;
}
