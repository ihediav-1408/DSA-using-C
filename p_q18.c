#include <stdio.h>

typedef struct book
{
    char book[50];
    char auth[20];
} std;

int main()
{
    int n, i;
    printf("\nEnter the total no. of entry: ");
    scanf("%d", &n);

    std b[n];
    for (i = 0; i < n; i++)
    {
        printf("\n\n%d ENTRY:", i + 1);
        printf("\nBook's Name: ");
        scanf("%s", b[i].book);
        printf("\nAuthor's Name: ");
        scanf("%s", b[i].auth);
    }

    printf("\n\nENTERED DETAILS:\n\n");

    for (i = 0; i < n; i++)
    {
        printf("\n\n%d ENTRY:", i + 1);
        printf("\nBook's Name: %s", b[i].book);
        printf("\nAuthor's Name: %s", b[i].auth);
    }

    return 0;
}