/*create a program  to find the sum and average of all element in a arry */
 #include <stdio.h>
int main(){
    int num[2],sum=0;
    float ave;
    for(int i=0;i<2;i++){
        printf("Enter %d number ",i+1);
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    ave=sum/2;
    printf("\nsum of num: %d ",sum);
    printf("\nAverage: %f ",ave);
    return 0;

}