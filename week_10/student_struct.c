#include <stdio.h>
typedef struct{
char name[50];
int rollno;
float marks[3];
float total;
float average;


}student;
int main(){
    int n;
    printf("no of students: ");
    scanf("%d",&n);
    student students[n];
    int i,j;
    for(i=0;i<n;i++){
        printf("student name: ");
      scanf(" %[^\n]",students[i].name);
        printf("\nroll no: ");
        scanf("%d",&students[i].rollno);
        students[i].total = 0;
        for(j=0;j<3;j++){
            printf("\nmarks for subject %d: ",j+1);
            scanf("%f",&students[i].marks[j]);
            students[i].total+=students[i].marks[j];
        }
        students[i].average=students[i].total/3.0;

    }
    for(i=0;i<n;i++){
        printf("\nstudent name: %s",students[i].name);
        printf("\nroll no: %d",students[i].rollno);
        printf("\ntotal: %f",students[i].total);
        printf("\naverage: %f",students[i].average);
    }
    return 0;
}
