#include <stdio.h>
int arraysum(int arr[],int n){
    int sum=0;
for(int i=0;i<n;i++){

    sum+=arr[i];

}
return sum;
}
int main(){
int n;
printf("number of terms: ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("number_%d: ",i+1);
    scanf("%d",&arr[i]);
}
int sum=arraysum(arr,n);
printf("%d",sum);
return 0;
}

