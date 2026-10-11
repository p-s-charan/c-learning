#include<stdio.h>
int main(){
int n,i;
printf("enter no of students: ");
scanf("%d",&n);
int roll[n];
int marks[n];
int student_marks[2][n];
for(i=0;i<n;i++){
printf("enter roll no: ");
scanf("%d",&roll[i]);
}
for(i=0;i<n;i++){
    printf("enter marks: ");
    scanf("%d",&marks[i]);
}
for(i=0;i<n;i++){
    student_marks[0][i]=roll[i];
    student_marks[1][i]=marks[i];
}
printf("roll no: ");
for(i=0;i<n;i++){
    printf("%d\t",student_marks[0][i]);
}
printf("\n");
printf("marks: ");
for(i=0;i<n;i++){
    printf("%d\t",student_marks[1][i]);
}
return 0;
}
