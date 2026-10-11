#include <stdio.h>
int main(){
int i,j,n,row,col,rowsum=0,colsum=0;
printf("enter no of rows: ");
scanf("%d",&n);
int mat[n][n];
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    printf("enter %d x %d element: ",i+1,j+1);
    scanf("%d",&mat[i][j]);}
}
printf("row you want to add: ");
scanf("%d",&row);
printf("col you want to add: ");
scanf("%d",&col);

    for(j=0;j<n;j++){
        rowsum+=mat[row-1][j];
    }
    for(i=0;i<n;i++){
        colsum+=mat[i][col-1];
    }
printf("the row sum: %d",rowsum);
printf("\nthe col sum: %d",colsum);

}
