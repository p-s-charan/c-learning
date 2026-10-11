#include <stdio.h>
int main(){
int i,j,n,temp;
printf("enter no of rows: ");
scanf("%d",&n);
int mat[n][n];
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    printf("enter %d x %d element: ",i+1,j+1);
    scanf("%d",&mat[i][j]);}
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
            int k=n-i-1;
        temp = mat[i][i];
        mat[i][i]=mat[i][k];
    mat[i][k]=temp;
    }
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("%d\t",mat[i][j]);

}
printf("\n");
}
return 0;
}
