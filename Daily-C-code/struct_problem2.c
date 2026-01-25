/* initialize an array of book structures with different data for each book using
 designated initializers
*/
#include<stdio.h>

struct book{
  char name[50];
  char publisher[52];
  float price  ;

};

int main(){
    struct book b1={.name="C++",.publisher="xyz",.price=12.26};
     printf("Book name:%s\nBook publisher:%s\nBook price:%.2f",b1.name,b1.publisher,b1.price);

  return 0;
  }
