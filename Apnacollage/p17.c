#include<stdio.h>
#include<math.h>

int square(int s);
void circlep(float values);
float rectangle(float a ,float b);
void printfs();

int main () {
    char c;
    int s;
    float a,b;
    float circle;
 A:   printf("enter name of which perameter you want: ");
    scanf("%s",&c);
    if(c=='c'){
    circlep(circle);
    }else if(c=='s'){
        square(s);
    }else if(c=='r'){
        rectangle(a,b);
    }else{
        printf("not vaild/n re enter \n");
        goto A;
    }
    printf("thank you");
    


    return 0;
}
void circlep(float circle){
    printf("enter number :");
    scanf("%f",&circle);
    printf("perameter of circle:%f\n",3.14*circle*circle);

}
void printfs(){
    printf("enter number");
}

int square(int s){
    printfs();
    scanf("%d",&s);
    printf("area of suare %d\n",s*s);
    return 0;

}

float rectangle(float a, float b){
    printfs();
    scanf("%f",&a);
    printfs();
    scanf("%f",&b);
    printf("area of rectangle %f\n",a*b);
    return 0;
}