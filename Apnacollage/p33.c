//Know about fgets and puts;
#include<stdio.h>
#include<string.h>
int main()
{
    //char str[100];
    char name[50];
    printf("enter your nick name ");
    //scanf("%49s",name);
    fgets(name,49,stdin);
    int l=strlen(name);
    printf("%s",name);
    puts(name);
    printf("the lenth of string %d",l);

    return 0;


}
