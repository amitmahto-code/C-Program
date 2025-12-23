//strcmp is use ti compare to string accourding charecter sky value
#include<stdio.h>
#include<string.h>
int main(){
    int result=strcmp("apple","banana");
    printf("copmaring 'apple with 'banana' : %d \n",result);

    result=strcmp("cherry","banana");
    printf("copmaring 'cherry' with 'banana' : %d \n",result);

    result=strcmp("date","date");
    printf("copmaring 'date' with 'date' : %d \n" ,result);

    result=strcmp("Date","date");
    printf("copmaring 'Date' with 'date' : %d \n",result);
    return 0;
}