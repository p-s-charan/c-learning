#include <stdio.h>
int main(){
int i,a,b;
printf("the value of a: ");
scanf("%d",&a);
int *p1=&a;
int *p2=&b;
//pointer decrement//
printf("orginal location: %p\n",p1);
p1--;
printf("decremented pointer :%p\n",p1);
p1++;
//addition to a pointer//
printf("orginal location: %p\n",p1);
p1=p1+2;
printf("after addition: %p\n",p1);
//subraction to a pointer//
printf("pointer location: %p\n",p1);
p1=p1-2;
printf("pointer location after subraction: %p\n",p1);
return 0;
}
