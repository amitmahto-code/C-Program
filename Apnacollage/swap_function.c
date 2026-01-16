//swap the number using function aslo we know about call by value passing
//  in perameter pass copy of the argument not a original

#include<stdio.h>

void swap(int ,int);
int main(){
    int x=3,y=5;
    printf("X= %d,y= %d\n",x,y);
    swap(x,y);
    printf("X= %d,y= %d\n",x,y);
    return 0;
}
void swap(int first,int second){
    int temp=first;
    first=second;
    second=temp;
    printf("first %d, second %d\n",first,second);
}
