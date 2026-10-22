#include <stdio.h>
#include <string.h>
typedef struct{
char title[100];
char author[100];
int isbn;
float price;
}books;
void display(int n,books book[n]){
int i;
 for (i = 0; i < n; i++) {
        printf("\nbooknumber:%d\n", i + 1);
        printf("title of book:%s\n", book[i].title);
        printf("author of book:%s\n", book[i].author);
        printf("isbn of book:%d\n", book[i].isbn);
        printf("price of book:%.2f\n", book[i].price);

    }
}
void booksearch(int n,books book[n]){
int i;
char find[50];
printf("enter name of author or title of the book: ");
scanf(" %[^\n]",find);
for(i=0;i<n;i++){
    if(strcmp(find,book[i].author)==0||strcmp(find,book[i].title)==0){
    printf("booknumber:%d\n",i+1);
   printf("title of book:%s\n",book[i].title);
    printf("author of book:%s\n",book[i].author);
    printf("isbn of book:%d\n",book[i].isbn);
   printf("price of book:%.2f\n",book[i].price);
    }
}
}
void deletebook(int *n,books book[]){
char del[50];
printf("enter author or title of the book you want to delete: ");
scanf(" %[^\n]",del);
for(int i=0;i<*n;i++){
 if(strcmp(del,book[i].author)==0||strcmp(del,book[i].title)==0){
        for(int j=i;j<*n-1;j++){
    book[j]=book[j+1];
        }
        (*n)--;
    i--;
 }
}
}
void addbook(int *n,books book[]){
    printf("title of book: ");
    scanf(" %[^\n]", book[*n].title);
    printf("author of book: ");
    scanf(" %[^\n]", book[*n].author);
    printf("isbn of book: ");
    scanf("%d", &book[*n].isbn);
    printf("price of book: ");
    scanf("%f", &book[*n].price);
     printf("Book added successfully!\n");
     (*n)++;

}
int main(){
int n,i,choice;
char del[50],find[50];
printf("number of books: ");
scanf("%d",&n);
books book[100];
for(i=0;i<n;i++){
    printf("title of book %d: ",i+1);
    scanf(" %[^\n]",book[i].title);
    printf("author of book %d: ",i+1);
    scanf(" %[^\n]",book[i].author);
    printf("isbn of book %d: ",i+1);
    scanf("%d",&book[i].isbn);
   printf("price of book %d: ",i+1);
    scanf("%f",&book[i].price);
}
do{
printf("\n=== MENU ===\n");
        printf("1. Search for a book\n");
        printf("2. Delete a book\n");
        printf("3. Add a book\n");
        printf("4. display\n");
        printf("5. exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
         if (choice == 1) {
            booksearch(n, book);
        }
        else if (choice == 2) {
           deletebook(&n, book);
        }
        else if (choice == 3) {
          addbook(&n, book);
        }
        else if (choice == 4) {
        display(n,book);
        }
        else if(choice==5){
           printf("exit the loop");
        }
} while(choice!=5);
return 0;
}
