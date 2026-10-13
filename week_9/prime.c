#include <stdio.h>
int isprime(int num){
if(num<=1){
    return 0;
}

else{
for(int i=2;i<num;i++){
    if(num%i==0){
        return 0;
    }

}
return 1;
}
}
int main(){
    int n,count=0,num=2;
printf("number of terms: ");
scanf("%d",&n);
while(count<n){
if(isprime(num)==1){
    printf("%d",num);
    count++;
}
printf("\n");
num++;
}
return 0;
}
