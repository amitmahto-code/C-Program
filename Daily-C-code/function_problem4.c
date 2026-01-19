// Call a function print_date that  prints the current date. 
//define the function without any perameter  

#include<stdio.h>
#include<time.h>
int  print_date();

int main(){
    print_date();
    return 0;
}
int  print_date(){
     time_t current_time;
     time(&current_time);
     char* date_string=asctime(localtime(&current_time));
     printf("Current date & time : %s",date_string);
}