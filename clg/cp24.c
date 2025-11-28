/*write a program that input n display pattern with total summunation 
ex= n=5 output 25,16,9,4,1 sum=55
*/
#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter number");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        printf("%d\t",i*i);
        sum+=i*i;
    }
    printf("sum%d",sum);
    return 0;
}