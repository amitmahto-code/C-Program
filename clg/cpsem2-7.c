//write a c program to sort elements id lexicographical order (dictionary order)
#include<stdio.h>
#include<string.h>
int main(){
 char name[10][50],temp[50];
 for(int i=0;i<10;i++){
    printf("%d name= ",i+1);
    scanf("%s",name[i]);
 }

 for(int i=0;i<9;i++){
    for(int j=i+1;j<10;j++){
        if(strcmp(name[i],name[j])>0){
            strcpy(temp,name[i]);
            strcpy(name[i],name[j]);
            strcpy(name[j],temp);
        }
    }
 }
 for(int i=0;i<10;i++){
    printf("\n%s",name[i]);
 }
 return 0;
}