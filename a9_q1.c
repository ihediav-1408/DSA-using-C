//WAP to implement deque and perform:insert, delete, display
//WAP to implement a doubly circular ll and insert node at last witjout using any secondary pointer
//WAP to implement two stacks in a single array
//WAP to implement stack using queue
//WAP to implement queue using stack
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next, *prev;
} LL;
LL* input(LL *);
void display(LL *, LL *);
void menu(LL *Head);
LL* at_last(LL *, LL *);
int main()
{
    LL *Head, *new;
    new = (LL *) malloc(sizeof(LL));
    Head = NULL; 
    printf("Enter first element into linked list: ");
    scanf("%d", &new->data);
    Head = new;
    new -> next = Head;
    new -> prev = Head;

    menu(Head);
    return 0;
}
void menu(LL *Head)
{
    int userInput, flag = 1;
    LL *Tail;
    char ch;
    do{
        printf("\nEnter 1 to input data\n");
        printf("Enter 2 to display data\n");
        printf("Enter 3 to add node at last\n");
        printf("Enter any other integer to exit\n");
        printf("Please enter your choice: ");
        scanf("%d", &userInput);

        switch(userInput){
            case 1:
                Tail = input(Head);
                break;
            case 2:
                display(Head, Tail);
                break;
            case 3:
                 at_last(Head, Tail);
            default:
                flag = 0;
                break;
        }

    } while (flag);
    display(Head, Tail);
}
LL* input(LL *Head)
{
    LL *ptr, *new, *Tail;
    char ch;
    ptr = Head;
    do{
        new = (LL *) malloc(sizeof(LL));
        new -> prev = ptr;
        ptr -> next = new;
        new -> next = Head;

        printf("Enter elements into linked list: ");
        scanf("%d", &new->data);
        ptr = ptr->next;

        printf("Do you want to continue (Y/N): ");
        getchar();
        ch = getchar();
    }while ((ch == 'y') || (ch == 'Y'));

    Tail = ptr;
    return Tail;
}
void display(LL *Head, LL* Tail)
{
    LL *ptr = Head;
    printf("\nData: ");
    do{
        printf("%d ", ptr -> data);
        ptr = ptr -> next;
    }while (ptr != Head);
    printf("%d\n", ptr->data);
    ptr = Tail;
    printf("Reversed Data: ");
    printf("%d ", Head -> data);
    while (ptr != Head){
        printf("%d ", ptr -> data);
        ptr = ptr -> prev;
    }
    printf("%d\n", ptr->data);
}
LL *at_last(LL *Head, LL *Tail)
{
    LL *new;
    new = (LL *)malloc(sizeof(LL));
    new->prev = Tail;
    new->next = Head;
    Head->prev = new;
    Tail->next = new;
    Tail = new;
printf("Enter data to be inserted: ");
scanf("%d", &new->data);
return Tail;
}