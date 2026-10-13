#include <stdio.h>
int matrixsum(int rows,int cols,int mat[rows][cols]){
    int topleft=mat[0][0];
    int topright=mat[0][cols-1];
    int bottomright=mat[rows-1][cols-1];
    int bottomleft=mat[rows-1][0];
    int sum=0;
return sum=topright+topleft+bottomleft+bottomright;
}
int main(){
int rows,cols;
printf("number of rows: ");
scanf("%d",&rows);
printf("number of cols: ");
scanf("%d",&cols);
int mat[rows][cols];
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        printf("%d X %d: ",i+1,j+1);
        scanf("%d",&mat[i][j]);
    }

}
int sum=matrixsum(rows,cols,mat);
printf("corner sum is :%d",sum);
return 0;
}
