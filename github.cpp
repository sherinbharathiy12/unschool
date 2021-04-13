#include <stdio.h>
#include <stdlib.h>
struct employee 
{
   char name[20];
   int Employee_ID;
   int Experience;
   int Salary;
};
typedef struct employee E;

void main()
{
    E EM;
    for (int i = 0;i < 5;i++)
    {
        
        printf("Enter name for employee no %d :", i+1);
        scanf_s("%s", &EM.name,20);
        printf("Enter employee id for employee no %d :", i+1);
        scanf_s("%d", &EM.Employee_ID);
        printf("Enter experience (in years) for employee no %d :", i+1);
        scanf_s("%d", &EM.Experience);
        printf("Enter salary (in dollars) for employee no %d : $", i+1);
        scanf_s("%d", &EM.Salary);
    }
    printf("\n Printing details for 5 employees \n");
    for (int i = 0;i < 5;i++)
    {
        printf("\n Details Of employee no : %d \n",i+1);
        printf("\nNAME : %s",  EM.name,20);
        printf("\n Employee id : %d", EM.Employee_ID);
        printf("\n Experience (in years) : %d",EM.Experience);
        printf("\n Salary (in dollars) : $%d ", EM.Salary);
      
    }
    
}
