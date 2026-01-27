/* write a function where the student structure also has book
 they have borrowed inside ,showing nested structure usage */
 #include<stdio.h>
 struct student {
    int id;
    char name[50];
    int year;
    float gpa;
    char grade[5];
}s1;
 struct book{
   char title[50];
   char author[50];
   float price; 
   struct student bowered_book[3];
} student;

void detals(struct student *stud,struct book boo[],int );


int main(){
   struct student s1;
   struct student *stud=&s1;
   struct book student[2];
   int nob;
   
   
   for(int i=0;i<1;i++){
      printf("Enter student id: ");
      scanf(" %d",&s1.id);
      printf("Enter student name: ");
      scanf(" %s",s1.name);
      printf("Enter student year: ");
      scanf(" %d",&s1.year);
      printf("Enter student gpa: ");
      scanf(" %f",&s1.gpa);
      printf("Enter student  grade: ");
      scanf("%s",s1.grade);
      printf("Total Book borrows: ");
      scanf("%d",&nob);
      for(int i=0;i<nob;i++){
         printf("Book detail %d\n",i+1);
         printf("Enter Book title: ");
         scanf(" %s",student[i].title);
         printf("Enter Book auhtor: ");
         scanf(" %s",student[i].author);
         printf("Enter Book price: ");
         scanf(" %f",&student[i].price);
      }
   }
   detals(stud,student,nob);
}

void detals(struct student *stud,struct book boo[], int nob){
   for(int i=0;i<1;i++){
        printf("The stuedent %d %s %d %.2f %s\n",stud->id,stud->name,stud->year,stud->gpa,stud->grade);

   }
   printf("Book bowored detals\n");
      for(int i=0;i<nob;i++){
         printf("%d book %s %s %.2f\n",i+1,boo[i].title,boo[i].author,boo[i].price);
   }

}