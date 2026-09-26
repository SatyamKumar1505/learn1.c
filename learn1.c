#include <stdio.h> 
int main() {
    
    int id;
    char name [30];
    int basic_salary;
    printf("Enter id: ");
    scanf("%d", &id);
    printf("\nEnter name: ");
    scanf("%s", name);
    printf("\nEnter basic_salary: ");
    scanf("%d", &basic_salary);
   printf("\nid is %d\n",id);
    printf("name is %s\n",name);
    printf("basic_salary is %d\n",basic_salary);   

       





      int number;
      printf("enter a number");
      scanf("%d",&number);
        
      if (number<0)
      {
        printf("negative number");
      }
        else
       { 
            printf("positive number");
      } 

    




    int age;
    printf("\nenter age");
    scanf("%d",&age);
       if (age>=18)
       {
         printf("eligible for voting");
       }
       else 
       {
        printf("not eligiblefor voting ");
       }
       
     return 0;
 }
