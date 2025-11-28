/*write a program that input n display following series with total summation
ex= n=5 output=2,6,12,20,30 sum=70
*/
#include<stdio.h>
int main (){
    int n;
    int sum=0;
    printf("enter number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\t",i*i+i);
        sum+=i*i+i;
    }
    printf("sum=%d",sum);
    return 0;
}