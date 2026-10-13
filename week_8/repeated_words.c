#include <stdio.h>
#include <string.h>
int main(){
int m,n,i,j,word_count=0,flag,k;
char str[100];
char word[50][50];
printf("enter the string: ");
gets(str);
n=strlen(str);
k=0;
for(i=0;i<n;i++){
    if(str[i]==' '||str[i]=='\0'){
    if(k>0){
word[word_count][k]='\0';
        word_count++;
        k=0;
    }
    }
    else{
        word[word_count][k]=str[i];
        k++;
    }
}
for(i=0;i<word_count;i++){
flag=0;
for(j=0;j<i;j++){
    if(strcmp(word[i],word[j])==0){
        flag =1;
       break;
    }
}
if(flag==0){
    printf("%s ",word[i]);
}
}
}
