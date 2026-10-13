#include <stdio.h>
int gcd(int a, int b){
    int check;
if(a<b){
    check=a;
}
if(b<a){
    check= b;
}
for(int i=check;i>0;i--){
    if(a%i==0&&b%i==0){
        return i;
    }
}
}
int main(){
int a,b;
printf("value of num1: ");
scanf("%d",&a);
printf("value of num2: ");
scanf("%d",&b);
int result= gcd(a,b);
printf("gcd is: %d",result);
return 0;
}
