//write a program that print n factorial of (1!,2!,3!,4!,5!)
#include<stdio.h>
int main(){
    
        int n;
        int factorial=1;
        printf("enter number");
        scanf("%d",&n);
        printf("factoriyal\t");
        for(int i=1;i<=n;i++){
            factorial=factorial*i;
            printf("%d\t",factorial);

        }
        return 0;
    }

   
   
   
   
   
   
   
   
   
   
   
    /*int n;
    int factoriyal=1;
    printf("enter number");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=i;j>0;--j){
        
        factoriyal=i*j;}
        printf("%d",factoriyal);
        }
        return 0;
}*/