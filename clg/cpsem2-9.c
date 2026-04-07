/*Write Menu base C Program with following option using UDF.
1. To check given number is Prime or not
2. To check given number is Armstrong or not.
3. To check given number Perfect or not.
4. Exit */
#include<stdio.h>

void prime(int n);
void armstrong( int );
void perfect( int );

int main(){
    int n;
    int number;
    printf("enter number ");
    scanf("%d",&number);
    printf("1 for check prime number\n");
    printf("2 for check armstrong number\n");
    printf("3 for check perfect number\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        prime(number);
        break;
    case 2:
        armstrong(number);
        break;
    case 3:
        perfect(number);
        break;     
    default:
    printf("Exit");
        break;
    }
    return 0;
}

void prime(int n){
int count=0;

    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("prime number");
    }else{
        printf("not prime number");
    
    }
}

void armstrong(int num){
     int tem ,digit ,sum=0;
 tem=num;
 while(tem>0){
     digit=tem%10;
    sum=sum+(digit*digit*digit);
    tem=tem/10;

 }
 if(num==sum){
    printf("Aramstrong number");
}else{
    printf("Not Aramstrong number");
 }
 
}

void perfect(int num){
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(num==sum){
        printf("perfect number");
    }else{
        printf("Not perfect number");
    }
}