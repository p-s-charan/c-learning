#include <stdio.h>
int main(){
int i,j,n,row,col,rowsum=0,colsum=0,target=0,diagsum=0,flag=1,secdiag=0;
printf("enter no of rows: ");
scanf("%d",&n);
int mat[n][n];
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    printf("enter %d x %d element: ",i+1,j+1);
    scanf("%d",&mat[i][j]);}
}
for(j=0;j<n;j++){
   target += mat[0][j];
}
for(i=0;i<n;i++){
        rowsum=0;
    for(j=0;j<n;j++){
        rowsum+=mat[i][j];
    }
    if(rowsum!=target){
        flag=0;
        break;
    }
}
for(j=0;j<n;j++){
    colsum=0;
    for(i=0;i<n;i++){
        colsum+=mat[i][j];
    }
    if(colsum!=target){
            flag=0;
    break;

    }
}
 diagsum=0;
for(i=0;i<n;i++){


        diagsum+=mat[i][i];
}
    if(diagsum!=target){
        flag=0;

    }

secdiag=0;
for(i=0;i<n;i++){


        secdiag+=mat[i][n-i-1];
}

    if(secdiag!=target){
        flag=0;

    }

if(flag==1){
    printf("magicsquare");
}
else{
    printf("not magic square");
}
}
