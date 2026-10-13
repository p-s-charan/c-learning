#include <stdio.h>
float average(int n,int student_marks[4][n]){
    for(int j = 0; j < n; j++){
        int sum = 0;
        for(int i = 1; i <= 3; i++){
           sum = sum + student_marks[i][j];
        }
        float avg = sum / 3.0;
        printf("avg_%d: %.2f\n", j + 1, avg);
    }
    return 0;
}
int main(){
int n;
printf("value of n: ");
scanf("%d",&n);
int student_marks[4][n];
for(int j=0;j<n;j++){
    printf("rollno: ");
    scanf("%d",&student_marks[0][j]);
}
for(int j=0;j<n;j++){
    for(int i=1;i<=3;i++){
        printf("enter marks for student%d sub %d: ",j+1,i);
        scanf("%d",&student_marks[i][j]);
    }
}
 average(n, student_marks);
 return 0;
}
