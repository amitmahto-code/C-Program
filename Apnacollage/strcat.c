/* Appends the Source string to the destination string,overwriting the terminating null byte
 at the end of destination and then adds a terminating null byte */
#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="Hello, ";
    char str2[]="World";
    strcat(str1,str2);
    printf("Concatenated String : %s",str1);
    return 0;
}