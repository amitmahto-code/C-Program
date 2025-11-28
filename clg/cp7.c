//write a program that input marks of three subject display total,percentage , grade 
#include<stdio.h>
int main(){
    int m1,m2,m3;int total;float per;
    printf("enter number one by one ");
    scanf("%d%d%d",&m1,&m2,&m3);
    total=m1+m2+m3;
    printf("Total=%d\n",total);
    per=total/3;
    printf("percentage%f\n",per);
    if(per>90 && per<=100 ){
    printf("Grade A+");
    }else if (per<=90 && per>70)
    {   printf("Grade B\n");
        
    }else if (per<=70 && per>50){
        printf("Grade C\n");
    }else if (per<=50 && per>0){
        printf("fail\n");
    }else {
        printf("invilid");
    }
    
}
