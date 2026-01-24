#include<stdio.h>
int main(){
    int i=3;
    int *j;
    j=&i;
    int **k;
    k=&j;

    printf("Address of i= %p\n",&i);//here print address 
    printf("Address of i= %p\n",j); 
    printf("Address of j= %p\n",*k);
    printf("Address of j= %p\n",&j);
    printf("Adreess of k=%p\n",&k);
    printf("value of j %p\n",j);
    printf("value of k %p\n",k);
    printf("Value of i= %d",i);
    printf("\nvalue at address= %d",*(&i));//value at address operators
    printf("\nvalue of i = %d",*j);
    printf("\nvalue of i= %d",**k);
    return 0;
}