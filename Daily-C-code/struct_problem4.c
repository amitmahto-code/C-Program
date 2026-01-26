/* pass a car structure to a function that print out a desription of the car in one complete sentence*/
 #include <stdio.h>
 
 struct detail {
    char make[50];
    char model[50];
    int year;
    char color[50];
 };
 void desription(struct detail c1[],int n);
 
 int main(){
     struct detail car[3];
    //  struct detail *cars[3]=&car[3];
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
     desription(car,3);
    return 0;
}
void desription(struct detail c1[],int n){
 for(int i=0;i<n;i++){
    printf("%d car detail\n",i+1);
    printf("The car %s,%s,%d in %s color\n",c1[i].make,c1[i].model,c1[i].year,c1[i].color);
 }
       
};