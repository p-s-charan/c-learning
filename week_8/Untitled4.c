#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char word[100];
    int k;
    printf("enter the sentence: ");
    gets(str);
    printf("enter word: ");
    gets(word);
    int l=0;
    for(int i=0;str[i]!='\0';i++){
        l++;
    }
    int wl=0;
    for(int i=0;word[i]!='\0';i++){
        wl++;
    }

       for(int i=0;i<l;i++){
             int flag=1;
        for(int j=0;j<wl;j++){
          if(str[i+j]!=word[j]){
            flag=0;
            break;
          }
        }


    if(flag==1){
    for(k=i;k<=l-wl;k++){
        str[k]=str[k+wl];
    }
    l=l-wl;


    }


}
printf("the new word: ");
puts(str);
return 0;
}
