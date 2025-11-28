#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,smallest;
    printf("Enter number");
    scanf("%d%d",&a,&b);
    smallest = a<b && b<a;
    printf("%d",smallest );
    return 0;
    


}