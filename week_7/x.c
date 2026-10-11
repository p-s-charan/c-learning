#include <stdio.h>
int main(){
    int i,j,k,m,n,x,y;
    printf("enter no of rows_1: ");
    scanf("%d",&x);
    printf("enter no of coloumns_1: ");
    scanf("%d",&y);
    printf("enter no of rows_2: ");
    scanf("%d",&m);
    printf("enter no of coloumns_2: ");
    scanf("%d",&n);
    int mat_1[x][y];
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d x %d value is: ",i+1,j+1);
            scanf("%d",&mat_1[i][j]);
        }
    }
    int mat_2[m][n];
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d x %d value is: ",i+1,j+1);
            scanf("%d",&mat_2[i][j]);
        }
    }
int result[10][10];
    for(i=0;i<x;i++){
        for(j=0;j<n;j++){
                 result[i][j] = 0;
            for(k=0;k<y;k++){
                result[i][j] += mat_1[i][k]*mat_2[k][j];
            }
            printf("%d\t",result[i][j]);
        }
       printf("\n");
    }




}
