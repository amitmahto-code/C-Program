#include<stdio.h>
#include<math.h>

int fibo(int n);

int main(){
    int n;
    printf("Enter fib postion");
    scanf("%d",&n);
    
    printf("%d",fibo(n));
    return 0;
}
int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibn1 = fibo(n-1);
    int fibn2 = fibo(n-2);
    int fibo = fibn1 + fibn2;
    //printf("fibo%d\n",n);
    return fibo;
}