#include <stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    int row;
    int column;
    struct node *next;
}*head=NULL;
void create(int k, int r1, int c1)
{
    struct node *new, *ptr;
    new=head;
    if(new==NULL)
    {
        new=(struct node*)malloc(sizeof(struct node));
        new->value=k;
        new->row=r1;
        new->column=c1;
        new->next=NULL;
        head=new;
    }
    else
    {
        while(new->next!=NULL)
        {
            new=new->next;
        }
        ptr=(struct node*)malloc(sizeof(struct node));
        ptr->value=k;
        ptr->row=r1;
        ptr->column=c1;
        ptr->next=NULL;
        new->next=ptr;
    }
}
void print()
{
    struct node *temp, *r, *s;
    temp=r=s=head;
    printf("\nRow Position: ");
    while(temp!=NULL)
    {
        printf("%d\t",temp->row);
        temp=temp->next;
    }
    printf("\nColumn Position: ");
    while(r!=NULL)
    {
        printf("%d\t",r->column);
        r=r->next;
    }
    printf("\nValue: ");
    while(s!=NULL)
    {
        printf("%d\t",s->value);
        s=s->next;
    }
}
int main()
{
    int i,j,m,n;
    printf("Enter the number of rows in the matrix.");
    scanf("%d",&m);
    printf("Enter the number of columns in the matrix.");
    scanf("%d",&n);
    int s[m][n];
    printf("Enter the elements of the sparse matrix.");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&s[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[i][j]!=0)
            {
                create(s[i][j],i,j);
            }
        }
    }
    print();
    return 0;
}