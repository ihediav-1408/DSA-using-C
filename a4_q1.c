#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *new;
    int data;
    struct node *next;
}*head=NULL;
void create()
{
    struct node *ptr,*new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value :");
    scanf("%d",&new->data);
    new->next=NULL;
    head=new;
    ptr=head;
    char ch;
    printf("Do you want to add another node : (Y/N)");
    scanf("  %c",&ch);
    while(ch=='Y')
    {
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value :");
        scanf("%d",&new->data);
        new->next=NULL;
        ptr->next=new;
        ptr=ptr->next;
        printf("Do you want to add another node : (Y/N)");
        scanf("  %c",&ch);
    }
    ptr=head;
}
void print()
{
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("\n%d",ptr->data);
        ptr=ptr->next;
    }
}
void insert_first()
{
    struct node *ptr=head;struct node *new;
    new=(struct node*)malloc(sizeof(struct node*));
    printf("\nEnter the data for the new node :");
    scanf("%d",&new->data);
    new->next=head;
    head=new;
    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
     print();
}
void insert_position()
{
    struct node *ptr=head;struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data for the new node :");
    scanf("%d",&new->data);
    int pos;
    printf("Enter the desired position :");
    scanf("%d",&pos);
    int count=1;
    while(ptr!=NULL&&count!=pos-1)
    {
        ptr=ptr->next;
        count++;
    }
    new->next=ptr->next;
    ptr->next=new;
    print();
}
void insert_last()
{
    struct node *ptr=head;struct node *new;
    new=(struct node*)malloc(sizeof(struct node*));
    printf("\nEnter the data for the new node :");
    scanf("%d",&new->data);
    while((ptr->next)!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=new;
    new->next=NULL;
    print();
}
void delete_first()
{
    struct node *ptr=head,*new,*temp;
    temp=head;
    head=head->next;
    free(temp);
    print();
}
void delete_position()
{
    struct node *new,*ptr=head;
    if(head==NULL){
        printf("Not possible !");
        exit;
    }else{
        int count=1,pos;
        printf("\nEnter the position :");
        scanf("%d",&pos);
        while((ptr->next)->next!=NULL&&count!=pos-1)
        {
            ptr=ptr->next;
            count++;
        }
        struct node *temp=ptr->next;
        ptr->next=temp->next;
        free(temp);
        print();
    }
}
void delete_last()
{
    struct node *ptr=head,*new;
    while((ptr->next)->next!=NULL)
    {
        ptr=ptr->next;
    }
    struct node *temp=ptr->next;
    ptr->next=NULL;
    free(temp);
    print();
}
void main()
{
    create();
    print();
    int ch;
    printf("\nENTER YOUR CHOICE\n");
    printf("PRESS 1:FOR INSERT AT FIRST\n");
    printf("PRESS 2:FOR INSERT AT A POSITION\n");
    printf("PRESS 3:FOR INSERT AT LAST\n");
    printf("PRESS 4:FOR DELETION AT FIRST\n");
    printf("PRESS 5:FOR DELETION AT A POSITION\n");
    printf("PRESS 6:FOR DELETION AT LAST\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        insert_first();
       
        break;
    case 2:
        insert_position();
        break;
    case 3:
        insert_last();
        break;
    case 4:
        delete_first();
        break;
    case 5:
        delete_position();
        break;
    case 6:
        delete_last();
        break;
    default:
        printf("INVALID.");
    }
}
