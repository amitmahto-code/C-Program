/* write a c structre volume with fields:liter and milliliter.
read the value of two volume and add them , if the value if millilitre is more than 1000 then add it to liter value*/
#include<stdio.h>

struct vloume{
    int  liter ;
    int milliliter;
}v1,v2;

int main(){
    int total_liter;
    int  total_milliliter;

    printf("Enter volume 1 liter : ") ;
    scanf("%d",&v1.liter);
    printf("Enrer volume 1  milliliter ");
    scanf("%d",&v1.milliliter);
    
    printf("Enter volume 2 liter : ") ;
    scanf("%d",&v2.liter);
    printf("Enrer volume 2 milliliter ");
    scanf("%d",&v2.milliliter);


    total_liter=v1.liter+v2.liter;
    total_milliliter=v1.milliliter+v2.milliliter;
    if (total_milliliter>=1000){
         int temp=total_milliliter/1000;
        total_liter+=temp;
        total_milliliter = total_milliliter % 1000;        
    }
    printf("Total liter= %d",total_liter);
    printf("\nTotal milliliter= %d",total_milliliter);
    return 0;
}