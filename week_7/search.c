#include <stdio.h>
int main(){
int i,j,n,x,count=0;
printf("enter no of rows: ");
scanf("%d",&n);
int mat[n][n];
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    printf("enter %d x %d element: ",i+1,j+1);
    scanf("%d",&mat[i][j]);}
}
printf("enter number you want to search: ");
scanf("%d",&x);
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(mat[i][j]== x){
            count++;
        }
    }
}
if(count>0){
    printf("number of times: %d",count);
}
else{
    printf("0 times");
}

}
