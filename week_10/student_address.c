#include <stdio.h>
typedef struct{
char street[50];
char city[50];
int pincode;
}address;
struct student{
char name[50];
int rollno;
address stu_add;
};
int main(){
    struct student s;
    printf("student name: ");
    fgets(s.name,sizeof(s.name),stdin);
    printf("enter rollno: ");
    scanf("%d",&s.rollno);
    printf("street: ");
    scanf(" %[^\n]",s.stu_add.street);
    printf("city: ");
    scanf(" %[^\n]",s.stu_add.city);
    printf("pincode: ");
    scanf("%d",&s.stu_add.pincode);
    printf("Name        : %s\n", s.name);
    printf("Roll Number : %d\n", s.rollno);
    printf("Street      : %s\n", s.stu_add.street);
    printf("City        : %s\n", s.stu_add.city);
    printf("Pincode     : %d\n", s.stu_add.pincode);


    return 0;

}

