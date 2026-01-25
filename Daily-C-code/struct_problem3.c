/*define car structure with field of make,model,year and color*/
 #include <stdio.h>
 
 struct detail {
    char make[50];
    char model[50];
    int year;
    char color[50];
 };

 int main(){
    struct detail car[3];
    for(int i=0;i<3;i++){
        printf("Car detail %d\n",i+1);
        printf("Enter car maker: ");
        scanf(" %s",car[i].make);
        printf("Enter car model: ");
        scanf(" %s",car[i].model);
        printf("Enter car year: ");
        scanf(" %d",&car[i].year);
        printf("Enter car color: ");
        scanf(" %s",car[i].color);
    }
    for(int i=0;i<3;i++){
        printf("Cars details %d\n",i+1);
        printf("Car maker: %s\nCar model:%s\nCar year:%d\nCar Colur:%s\n",car[i].make,car[i].model,car[i].year,car[i].color);
        printf("\n");
       
    }
    return 0;
 }