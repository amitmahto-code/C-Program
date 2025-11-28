//Write a program that input three number display smallest number 
/*#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter  number = ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && b>=c){
        printf("First %d",b);
    }else if (b>=c && b>=a){
        printf("Second %d",b);
    }else if(c>=b && c>=a)
    {
        printf("Third %d",c);
    }else if(a== b && a!=c){
        printf("%d",a);

    }else if(a==c && a!=b){
        printf("%d",a);
    }else if(c== b && b!=a){
        printf("%d",c);
    }
    else{
        printf("egual");
    }
    return 0;
    
}*/
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c) {
        printf("Smallest number is: %d\n", a);
    } else if (b <= a && b <= c) {
        printf("Smallest number is: %d\n", b);
    } else {
        printf("Smallest number is: %d\n", c);
    }

    return 0;
}
