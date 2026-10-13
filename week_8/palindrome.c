#include <stdio.h>
#include <string.h>
int main(){
    int size=0,i,j,temp,flag=1;
    char str[100];
    printf("enter a string: ");
   gets(str);

    while(str[size]!='\0'){
        size++;

    }
    for(i=0,j=size-1;i<=j;i++,j--){
            if(str[i]!=str[j]){
flag=0;
    }
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;

    }
    printf("\nreverse is: ");
    puts(str);

    if(flag==1){
        printf("is palindrome");
        }
        else{
            printf("not palindrome");
        }
    return 0;}
