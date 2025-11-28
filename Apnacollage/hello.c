#include<stdio.h>
int main ()
{   
    for(int i=1;  ;i++)
    {
        printf("enter number");
        scanf("%d",&i);
        if(i%2==1)
        printf("odd\n");
        continue;
    }
    printf("end");
    return 0;
}
