/*Write a program input two number display summation of both if summation is odd display
 square of 1st number if summation is even display  square of second number */
 #include<stdio.h>
int main (){
    int a,b; int sum;
    printf("enter number one by one ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum of total number %d\n",sum);
    if(sum%2==1){
        printf("%d",a*a);

    }else{
        printf("%d",b*b);
    }
    return 0;

}