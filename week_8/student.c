#include <stdio.h>
#include <string.h>
int main(){
    int n;
    printf("the number of students: ");
    scanf("%d",&n);
char student_name[n][50];
for(int i=0;i<n;i++){
    printf("student%d name: ",i+1);
    scanf("%s",student_name[i]);
}
for(int i=0;i<n;i++){
    printf("%s\n",student_name[i]);
}
}

