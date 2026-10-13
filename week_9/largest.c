#include<stdio.h>
int largest(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
int n;
printf("number of digits: ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("enter number: ");
    scanf("%d",&arr[i]);

}
int max;
max= largest(arr,n);
printf("%d",max);
}
