#include <stdio.h>
int max(int *ptr,int n){
   int max= ptr[0];
    for(int i=0;i<n;i++){
        if(ptr[i]>max){
            max=ptr[i];
        }
    }
    return max;
}
int main(){
int n,i;
printf("enter number of numbers: ");
scanf("%d",&n);
int arr[n];
int *ptr=&arr[0];
for(i=0;i<n;i++){
    printf("enter number_%d: ",i+1);
    scanf("%d",&ptr[i]);
}
int maximum=max(ptr,n);
printf("the max num: %d",maximum);
return 0;
}
