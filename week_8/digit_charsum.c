#include <stdio.h>
#include <string.h>
int main(){
int i=0,numcount=0,charcount=0,sum=0;
char str[100];
printf("enter string: ");
gets(str);
while(str[i]!='\0'){
    charcount++;
    if(str[i]>='0'&&str[i]<='9'){
        numcount++;
        sum+=(str[i]-'0');
    }
i++;
}

printf("no: of characters: %d",charcount);
printf("\nno: of digits: %d",numcount);
printf("\nsum is: %d",sum);
return 0;
}
