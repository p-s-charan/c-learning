#include <stdio.h>
typedef struct{
int day;
int month;
int year;
}date;
int main(){
    date date1;
    date date2;
printf("enter the first date: ");
scanf("%d %d %d",&date1.day,&date1.month,&date1.year);
printf("enter the second date: ");
scanf("%d %d %d",&date2.day,&date2.month,&date2.year);
if(date1.year > date2.year){
    printf("date2 is earlier");
}
 else if(date1.year<date2.year) {
        printf("date1 is earlier");
 }
 else if(date1.month>date2.month){
  printf("date2 is earlier");
 }
 else if(date1.month<date2.month){
  printf("date1 is earlier");
  }
  else if(date1.day>date2.day){
    printf("date2 is earlier");
  }
   else if(date1.day<date2.day){
    printf("date1 is earlier");
  }


return 0;
}
