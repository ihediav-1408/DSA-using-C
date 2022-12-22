#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node *new;
    int data;
    struct node *next;
}*head=NULL;

void create()
{
    struct node *new,*ptr;
    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data :");
    scanf("%d",&new->data);
    new->next=head;
    head=new;
    ptr=head;
    char choice;
    printf("Do you want to add another node : (Y/N)\n");
    scanf("  %c",&choice);
    while(choice=='Y')
    {
        new=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data :");
        scanf("%d",&new->data);
        new->next=head;
        ptr->next=new;
        ptr=ptr->next;
        printf("Do you want to add another node : (Y/N)\n");
        scanf("  %c",&choice);
    }
    ptr=head;
}
void print(){
    struct node *ptr=head;
    printf("\n");
    do
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    } while (ptr!=head);
    printf("%d",ptr->data);
}

void insertFirst()
{
    struct node *ptr=head,*new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data for the new node :");
    scanf("%d",&new->data);
    new->next=head;
    ptr=head;
    do
    {
        ptr=ptr->next;
    } while (ptr->next!=head);
    ptr->next=new;
    head=new;
}

void insertLast()
{
    struct node *ptr=head,*new;
    new=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data for the new node :");
    scanf("%d",&new->data);
    do
    {
        ptr=ptr->next;
    } while (ptr->next!=head);
    ptr->next=new;
    new->next=head;
}

void insertPosition()
{
    struct node *new;struct node *ptr=head;
    new=(struct node *)malloc(sizeof(struct node));
    int data;
    printf("\nEnter the value of the new node :");
    scanf("%d",&new->data);
    int pos;
    printf("\nEnter the position :\n");
    scanf("%d",&pos);
    int count=1;
    do
    {
        ptr=ptr->next;
        count++;
    } while (ptr!=head && count!=pos-1);
    new->next=ptr->next;
    ptr->next=new;
}

void deleteFirst()
{
    struct node *ptr=head,*new,*temp;
    do
    {
        ptr=ptr->next;
    } while (ptr->next!=head);
    ptr->next=head->next;
    temp=head;
    head=head->next;
    free(temp);
}

void deleteLast()
{
    struct node *ptr=head,*new;
    while((ptr->next)->next!=head)
    {
        ptr=ptr->next;
    }
    struct node *temp=ptr->next;
    ptr->next=head;
    free(temp);
}

void deletePosition()
{
    struct node *new,*ptr=head;
    if(head==NULL){
        printf("Not possible !");
        exit;
    }else{
        int count=1,pos;
        printf("\nEnter the position :");
        scanf("%d",&pos);
        while((ptr->next)->next!=head&&count!=pos-1)
        {
            ptr=ptr->next;
            count++;
        }
        struct node *temp=ptr->next;
        ptr->next=temp->next;
        free(temp);
    }
}
void main()
{
    create();
    print();
    int ch;
    while (ch!=0)
    {
        printf("\nENTER YOUR CHOICE\n");
        printf("PRESS 0:EXIT\n");
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
                insertFirst();
                print();
                break;
            case 2:
                insertPosition();
                print();
                break;
            case 3:
                insertLast();
                print();
                break;
            case 4:
                deleteFirst();
                print();
                break;
            case 5:
                deletePosition();
                print();
                break;
            case 6:
                deleteLast();
                print();
                break;
        }    
    }if (ch==0)
    {
        printf("\nYOU ENDED THE PROGRAM !\nYOUR LINKED LIST HAS:");
        print();
    }
}