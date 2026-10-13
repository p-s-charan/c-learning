#include <string.h>
#include <stdio.h>
void toggle(char line[]){
    int i=0;
while(line[i]!='\0'){
    if(line[i] >='a' && line[i] <='z'){
        line[i]=line[i]-32;
    }
    else if(line[i] >='A' && line[i] <='Z'){
        line[i]=line[i]+32;
    }
    i++;
}

}
int main(){
char line[50];
printf("enter the sentence: ");
gets(line);
toggle(line);
printf("%s",line);
return 0;
}
