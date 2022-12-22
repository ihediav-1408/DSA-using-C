#include <stdio.h>
#include <string.h>
struct student{
char name[20];
int rollno;
int m[5];
int total;
char grade;
}s[100];

void sortdata(int n)
{
    int i, j;
    struct student temp;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
            if (s[j].total > s[j+1].total)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;    
            }        
        }
    }    
}
void printSortedData(int n)
{
    int i,j;
    printf("\nAfter Sorting:\n");
    for (i=0; i<n; i++)
    {
        printf("\nName of student: %s\n",s[i].name);
        printf("Roll number of student: %d\n",s[i].rollno);
        printf("Marks of student: ");
        for(j=0;j<5;i++)
        {
            printf("%d",s[i].m[j]);
        }
        printf("\nTotal marks of student %d",s[i].total);
        printf("\nGrade of student %c\n",s[i].grade);
    }
}
int main()
{
    int i,n,j;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    printf("Enter students' data:\n");
    for (i=0; i<n; i++)
    {
        printf("For student %d :\n",i+1);
        printf("Enter the name of the student: ");
        scanf("%s",s[i].name);
        printf("Enter the roll number of the student: ");
        scanf("%d",&s[i].rollno);
        printf("Enter marks in 5 subjects: ");
        for(j=0;j<5;j++)
        {
            scanf("%d",&s[i].m[j]);
        }
        for(j=0;j<5;j++)
        {
            s[i].total+=s[i].m[j];  
        }
        printf("Enter the grade ");
        scanf(" %c",&s[i].grade);
    }
    void sortdata(int);
    void printSortedData(int);
    sortdata(n);
    printSortedData(n);
    return 0;
}