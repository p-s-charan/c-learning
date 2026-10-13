#include <stdio.h>
#include <string.h>
int ispalin(char str[],int size){

for(int i=0,j=size-1;i<=j;i++,j--){
    if(str[i]!=str[j]){
        return 0;
    }
}
 return 1;

}
int main(){
char str[50];

printf("enter the string: ");
gets(str);
int size = strlen(str);
if(ispalin(str,size)==1){
    printf("number is palindrome");
}
else{
    printf("number is not palindrome");
}
return 0;
}
