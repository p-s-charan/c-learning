#include <stdio.h>
int multiply(int m,int n){
    int result;
    for(int i=1;i<=n;i++){
        result+=m;
    }
    return result;
}
int main(){
int m,n;
printf("write m: ");
scanf("%d",&m);
printf("write n: ");
scanf("%d",&n);
int result;
result=multiply(m,n);
printf("%d",result);
}
