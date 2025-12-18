//write a program that input 10 number display total of all of number 
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int sum= 0;
    for(int i=1;i<=10;i++){
        printf("enter number");
        scanf("%d",&n);
        sum+=n;
    }
    printf("sum%d\n",sum);
    printf("avg%d",sum/10);

    return 0;
}
