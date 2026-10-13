#include <stdio.h>
int fact(int num){
    int f=1;
if(num==1){
    return 1;
}
if(num==0){
    return 1;
}
for(int i=1;i<=num;i++){
    f=f*i;
}
return f;
}
int main(){
int n,r,ncr;
printf("value of n: ");
scanf("%d",&n);
printf("value of r: ");
scanf("%d",&r);
ncr=fact(n)/(fact(r)*fact(n-r));
printf("ncr: %d",ncr);
return 0;
}
