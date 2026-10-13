#include <stdio.h>
#include <conio.h>
int main(){
char un[100],pass[100];
int i,size;
printf("password size: ");
scanf("%d",&size);
printf("password is: ");
for(i=0;i<size;i++){
    pass[i]=getch();
    printf("*");
}
printf("\nyour password is: %s",pass);
return 0;
}
