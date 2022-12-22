#include <stdio.h>
#include<string.h>

struct date{
    int day;
    int month;
    int year;
};
struct employee{
    char name[20];
    struct date dob;
    struct date doj;
    int salary;
}e[100];

void sortdatabyname(int n)
{
        int i, j;struct employee temp;
        for (i=0; i<n; i++){
            for (j=0; j<n-i-1; j++){
                if (strcmp(e[j].name,e[j+1].name)>0)
                {
                    temp = e[j];
                    e[j] = e[j+1];
                    e[j+1] = temp;    
                }        
            }
        }
        printf("\nAfter Sorting:\n");
        for (i=0; i<n; i++)
        {
        printf("\nName of employee: %s\n",e[i].name);
        printf("Date of birth: %d day %d month %d year\n",e[i].dob.day,e[i].dob.month,e[i].dob.year);
        printf("Date of joining: %d day %d month %d year\n",e[i].doj.day,e[i].doj.month,e[i].doj.year);
        printf("his/her salary : %d ",e[i].salary);
    }
}
void sortdatabydob(int n)
{
        int i, j;struct employee temp;
        for (i=0; i<n; i++){
            for (j=0; j<n-i-1; j++){
                if (e[j].dob.year>e[j+1].dob.year)
                {
                    temp = e[j];
                    e[j] = e[j+1];
                    e[j+1] = temp;
                }else if(e[j].dob.year==e[j+1].dob.year&&e[j].dob.month>e[j+1].dob.month){
                    temp = e[j];
                    e[j] = e[j+1];
                    e[j+1] = temp;
                }
                else if(e[j].dob.year==e[j+1].dob.year&&e[j].dob.month==e[j+1].dob.month&&e[j].dob.day>e[j+1].dob.day){
                    temp = e[j];
                    e[j] = e[j+1];
                    e[j+1] = temp;
                }
            }
        }
        printf("\nAfter Sorting:\n");
        for (i=0; i<n; i++)
        {
        printf("\nName of employee: %s\n",e[i].name);
        printf("Date of birth: %d day %d month %d year\n",e[i].dob.day,e[i].dob.month,e[i].dob.year);
        printf("Date of joining: %d day %d month %d year\n",e[i].doj.day,e[i].doj.month,e[i].doj.year);
        printf("his/her salary : %d ",e[i].salary);
    }
}
void sortdatabydoj(int n)
{
        int i, j;struct employee temp;
        for (i=0; i<n; i++){
            for (j=0; j<n-i-1; j++){
                if (e[j].doj.year>e[j+1].doj.year)
                {
                    temp = e[j];
                    e[j] = e[j+1];
                    e[j+1] = temp;
                }else if(e[j].doj.year==e[j+1].doj.year&&e[j].doj.month>e[j+1].doj.month){
                    temp = e[j];
                    e[j] = e[j+1];
                    e[j+1] = temp;
                }
                else if(e[j].doj.year==e[j+1].doj.year&&e[j].doj.month==e[j+1].doj.month&&e[j].doj.day>e[j+1].doj.day){
                    temp = e[j];
                    e[j] = e[j+1];
                    e[j+1] = temp;
                }
            }
        }
        printf("\nAfter Sorting:\n");
        for (i=0; i<n; i++)
        {
        printf("\nName of employee: %s\n",e[i].name);
        printf("Date of birth: %d day %d month %d year\n",e[i].dob.day,e[i].dob.month,e[i].dob.year);
        printf("Date of joining: %d day %d month %d year\n",e[i].doj.day,e[i].doj.month,e[i].doj.year);
        printf("his/her salary : %d ",e[i].salary);
    }
}
void sortdatabysalary(int n)
{
        int i, j;struct employee temp;
        for (i=0; i<n; i++)
        {
            for (j=0; j<n-i-1; j++)
            {
                if (e[j].salary>e[j+1].salary)
                {
                    temp = e[j];
                    e[j] = e[j+1];
                    e[j+1] = temp;
                }
            }
        }
    printf("\nAfter Sorting:\n");
    for (i=0; i<n; i++)
    {
        printf("\nName of employee: %s\n",e[i].name);
        printf("Date of birth: %d day %d month %d year\n",e[i].dob.day,e[i].dob.month,e[i].dob.year);
        printf("Date of joining: %d day %d month %d year\n",e[i].doj.day,e[i].doj.month,e[i].doj.year);
        printf("his/her salary : %d ",e[i].salary);
    }
}        
int main()
{
    int i,n;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    printf("Enter employees data :");
    
    for (i=0; i<n; i++){
        printf("\nName of employee:");
        scanf("%s",e[i].name);
        printf("Date of birth:\n");
        scanf("%d%d%d",&e[i].dob.day,&e[i].dob.month,&e[i].dob.year);
        printf("Date of joining:\n");
        scanf("%d%d%d",&e[i].doj.day,&e[i].doj.month,&e[i].doj.year);
        printf("his/her salary : ");
        scanf("%d",&e[i].salary);
        printf("\n");
    }
    void sortdatabyname(int);
    void sortdatabydob(int);
    void sortdatabydoj(int);
    void sortdatabysalary(int);
    sortdatabyname(n);
    sortdatabydob(n);
    sortdatabydoj(n);
    sortdatabysalary(n);
    return 0;
}