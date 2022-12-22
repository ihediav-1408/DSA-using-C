#include <stdio.h>
struct people{
    char name[50];
    int age;
    char city[50];
};
int main()
{
    int i,max,flag;
    struct people p[5];
    for(i=0;i<5;i++)
    {
        printf("Enter name.\n");
        scanf("%s",&p[i].name);
        printf("Enter age.\n");
        scanf("%d",&p[i].age);
        printf("Enter city.\n");
        scanf("%s",&p[i].city);
    }
    max=0,flag=0;;
    for(i=0;i<5;i++)
    {
        if(p[i].age>=max)
        {
            max=p[i].age;
            flag=i;
        }
    }
    printf("Eldest person details:\n");
    printf("\nNAME: %s",p[flag].name);
    printf("\nAGE: %d",p[flag].age);
    printf("\nCITY: %s",p[flag].city);
    return 0;
}