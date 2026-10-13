#include<stdio.h>
int fib(int n){
     if(n==0){
        return 0;
     }
     if(n==1){
        return 1;
     }


    return fib(n-1)+fib(n-2);
}
int main(){
int n;
printf("number of terms: ");
scanf("%d",&n);
printf("series: ");
for(int i=0;i<n;i++){
    int result = fib(i);
    printf("%d ",result);
}
return 0;
}
