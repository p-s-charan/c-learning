#include <stdio.h>
int main(){
int i,n;
printf("number of digits: ");
scanf("%d",&n);
int arr[n];
int dest_arr[n];
for(i=0;i<n;i++){
    printf("num_%d: ",i+1);
    scanf("%d",&arr[i]);
}
int *p1=&arr[0];
int *p2=&dest_arr[0];
for(i=0;i<n;i++){
*p2=*p1;
p1++;
p2++;
}
p2=&dest_arr[0];
for(i=0;i<n;i++){
    printf("%d ",p2[i]);
}
return 0;
}
