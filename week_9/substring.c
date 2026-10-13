#include <stdio.h>
#include <string.h>
int main(){
char str[100];
char substr[100];
char*result;
printf("Enter string: ");
gets(str);
printf("enter sub string: ");
gets(substr);
int len=strlen(substr);
result = strstr(str,substr);
printf("substring found: %.*s",len,result);
return 0;
}
