/*write program that input n display following pattern with totall summation 
ex:- n=5 output= 1,4,9,16,25 sum=55 */
#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        
        printf("%d\t",i*i);
        
        sum+=i*i;
     }
    printf("sum%d",sum);
    return 0;

}