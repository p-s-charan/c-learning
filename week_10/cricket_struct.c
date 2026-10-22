#include <stdio.h>
#include <string.h>
typedef struct{
char playername[50];
char teamname[50];
float batting_average;
}cricket;
int main(){
int n,i,j;
printf("number of players: ");
scanf("%d",&n);
cricket player[n];
cricket temp;
for(i=0;i<n;i++){
printf("playername: ");
scanf(" %[^\n]",player[i].playername);
printf("teamname: ");
scanf(" %[^\n]",player[i].teamname);
printf("batting average: ");
scanf("%f",&player[i].batting_average);
}
for(i=0;i<n-1;i++){
    for(j=0;j<n-1;j++){
    if(player[j].batting_average<player[j+1].batting_average){
        temp=player[j];
        player[j]=player[j+1];
        player[j+1]=temp;
    }
    }
}
for(i=0;i<n;i++){
    printf("player name: %s\n",player[i].playername);
    printf("team name: %s\n",player[i].teamname);
    printf("average: %.2f\n",player[i].batting_average);
}
return 0;
}
