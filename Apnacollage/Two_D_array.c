//learn how to add a record in array of and how to access them
#include<stdio.h>
#include<string.h>
int main(){
    char name[4][20]={"Amit","Gaurav","Ram","Kunal"};
    for(int i=0;i<4;i++){
        puts(name[i]);
    }
    //acces them with character
    for(int i=0;i<4;i++){
        for(int j=0;j<strlen(name[i]);j++){
            printf("%c",name[i][j]);
        }
        printf("\n");
    }
    return 0;
}