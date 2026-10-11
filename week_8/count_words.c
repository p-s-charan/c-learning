#include <stdio.h>
#include<string.h>
int main(){
char str[100];
int count=1;
int i=0;
printf("enter a sentence: ");
fgets(str,sizeof(str),stdin);
while(str[i]!='\0'){
    if(str[i]==' '){
        count++;
    }
    i++;
}
printf("no of words: %d",count);
return 0;
}


