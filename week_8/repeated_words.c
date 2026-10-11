#include<stdio.h>
#include<string.h>
int main(){
int i,j,count_c=0,count_d=0,m,n,sum=0;
char str[100];
printf("enter string: ");
gets(str);
n=strlen(str);
for(i=0;i<n;i++){
    if(str[i]>='A'&&str[i]<='z'){
        count_c++;
    }
    if(str[i]>='a'&&str[i]<='z'){
        count_c++;
    }
    if(str[i]>='0'&&str[i]<='9'){
        count_d++;
        sum=sum+str[i]-('0');
    }
}
printf("letters: %d\n",count_c);
printf("numbers: %d\n",count_d);
printf("sum: %d\n",sum);

return 0;
}
