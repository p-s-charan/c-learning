#include <stdio.h>
#include <string.h>
typedef struct{
int product_id;
char name[50];
float price;
}product;
int main(){
    int i,n;
    printf("no of products: ");
    scanf("%d",&n);
    product products[n];
    product*ptr=&products[0];
    for(i=0;i<n;i++){
        printf("products name: ");
        scanf(" %[^\n]",ptr[i].name);
        printf("product_id: ");
        scanf("%d",&ptr[i].product_id);
        printf("price: ");
        scanf("%f",&ptr[i].price);
    }
    for(i=0;i<n;i++){
        printf("\nproduct_id: %d",ptr[i].product_id);
        printf("\nproduct name: %s",ptr[i].name);
        printf("\nprice: %.2f\n",ptr[i].price);
    }
}
