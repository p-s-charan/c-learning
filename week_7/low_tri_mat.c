#include <stdio.h>
int main(){
    int i,j,n,flag=0;
    printf("number of rows: ");
    scanf("%d",&n);
    int mat[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("enter value of %d x %d: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(mat[i+1][j]== 0){
                flag = 1;
            }

        }
    }
    if(flag == 1){
            printf("it is a lower triangular matrix");

    }
    else{
        printf("not a lower triangular matrix");
    }


}
