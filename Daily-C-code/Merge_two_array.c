//marge two array
#include<stdio.h>
int main (){
    int a[10],b[10],m[20],i;
    int f1,f2;
    printf("enter First array size ");
    scanf("%d",&f1);
    printf("Enter second array size");
    scanf("%d",&f2);
    printf("enter first array \n");
    for(i=0;i<f1;i++){
        printf("enter element : ");
        scanf("%d",&a[i]);
    }
    printf("Enter second array:\n ");
    for(i=0;i<f2;i++){
        printf("enter elemet ");
        scanf("%d",&b[i]);
    }
    //margeing

    for(i=0;i<f1;i++){
        m[i]=a[i];
    }
    for(i=0;i<f2;i++){
            m[f1+i]=b[i];
    }
    for(int pass=0;pass<f1+f2-1;pass++){
    for(i=0;i<f1+f2-1-pass;i++){
        if(m[i]>m[i+1]){
            int tem=m[i];
            m[i]=m[i+1];
            m[i+1]=tem;
        }
    }
    }
    for(i=0;i<f1+f2;i++){
        printf("%d \t",m[i]);
    }
    return 0;
}