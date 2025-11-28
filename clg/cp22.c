/*write a program that input n display following pattern with total summation 
ex:- n=5 output=0,7,26,63,124 sum=220
*/
#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\t",(i*i*i)-1);
        sum+=(i*i*i)-1;
    }
    printf("sum=%d",sum);
    return 0;
}