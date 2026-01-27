/* write a function where the student structure also has book
 they have borrowed inside ,showing nested structure usage */
 struct student {
    int id;
    char name[50];
    int year;
    float gpa;
    char grade[5];
};
 struct book{
   char title[50];
   char author[50];
   float price; 
   struct student bowered_book[3];
} student;

void detals(struct student *,struct book*);


int main(){
   struct student s1;
   struct book student[2];
   // int n;
      int nob;


       for(int i=0;i<1;i++){
      //   printf("Student details %d\n",i+1);
               printf("Enter student id: ");
               scanf(" %d",&s1.id);
               printf("Enter student name ");
               scanf(" %s",s1.name);
               printf("Enter student year: ");
               scanf(" %d",&s1.year);
               printf("Enter student gpa: ");
               scanf(" %f",&s1.gpa);
               printf("Enter student  grade:");
               scanf("%s",s1.grade);
               printf("Total Book borrows");
               printf("%d",&nob);
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
      detals(&student,&s1);   
}
void detals(struct student *s1,struct book*student){
 printf("here the details of bowored book \n ");
       for(int i=0;i<1;i++){
        printf("The stuedent %d %s %d %.2f %s",s1[i].id,s1[i].name,s1[i].year,s1[i].gpa,s1[i].grade);
   //      for(int j=0;;i++)
   //  }

   }

}


