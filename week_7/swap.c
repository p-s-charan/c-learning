#include <stdio.h>
int main(){
int i,j,r1,r2,c1,c2;
int mat_1[3][3]={
{1,2,3},
{4,5,6},
{6,7,8}
};

printf("enter the row you want to interchange: ");
scanf("%d",&r1);
r1--;
printf("enter the row you want to put: ");
scanf("%d",&r2);
r2--;
printf("enter the coloumn you want to interchange: ");
scanf("%d",&c1);
c1--;
printf("enter the coloumn you want to put: ");
scanf("%d",&c2);
c2--;
for(j=0;j<3;j++){
        int temp = mat_1[r1][j];
mat_1[r1][j]=mat_1[r2][j];
mat_1[r2][j]=temp;
}
for(i=0;i<3;i++){
int temp = mat_1[i][c1];
mat_1[i][c1] = mat_1[i][c2];
mat_1[i][c2]=temp;
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\t",mat_1[i][j]);
    }
    printf("\n");
}

}
