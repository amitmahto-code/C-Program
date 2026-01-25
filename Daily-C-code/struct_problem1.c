//create a program where you need to store and process data for a book with attribute like title
//author , and price,demonstratating why a structure is more suitable than saperate variables
 #include <stdio.h>
 
 struct detail {
    char title[50];
    char author[50];
    float price; 
 };

 int main(){
    struct detail book[3];
    for(int i=0;i<3;i++){
        printf("Book detail %d\n",i+1);
        printf("Enter Book title: ");
        scanf(" %s",book[i].title);
        printf("Enter Book auhtor: ");
        scanf(" %s",book[i].author);
        printf("Enter Book price: ");
        scanf(" %f",&book[i].price);
    }
    for(int i=0;i<3;i++){
        printf("Book details %d\n",i+1);
        printf("Book title: %s\nBook author:%s\nBook price:%.2f",book[i].title,book[i].author,book[i].price);
        printf("\n");
       
    }
    return 0;
 }