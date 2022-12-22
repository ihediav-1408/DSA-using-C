#include <stdio.h>
#define MAXSIZE 10

int main(){
    void pushFront(int *, int *, int *);
    void popFront(int *, int *);
    void displayFront(int *, int *);
    void pushRev(int *, int *, int *);
    void popRev(int *, int *);
    void displayRev(int *, int *);

    int arrayStack[MAXSIZE];
    int *top1, *top2, userInput, flag = 1;
    int temp1, temp2;
    top1 = &temp1;     top2 = &temp2;
    *top1 = -1;
    *top2 = MAXSIZE;
    printf("TESTING\n");
    
    while (flag){
        printf("\n------------------------------------------------\n");
        printf("STACK 1:\n");
        printf("1: To push into Stack\n");
        printf("2: To pop from Stack\n");
        printf("3: To display elements of Stack\n");

        printf("\nSTACK 2\n");
        printf("4: To push into Stack\n");
        printf("5: To pop from Stack \n");
        printf("6: To display elements of Stack \n");
        printf("7: To exit\n");

        printf("Your choice: ");
        scanf("%d", &userInput);
        switch(userInput){
            case 1:
                pushFront(arrayStack, top1, top2);
                break;
            case 2:
                popFront(arrayStack, top1);
                break;
            case 3:
                displayFront(arrayStack, top1);
                break;
            case 4:
                pushRev(arrayStack, top1, top2);
                break;
            case 5:
                popRev(arrayStack, top2);
                break;
            case 6:
                displayRev(arrayStack, top2);
                break;
            default:
                flag = 0;
                break;
        }
    }
    return 0;
}

void pushFront(int *stack, int *top1, int *top2){
    if (*top1 == *top2){
        printf("STACK OVERFLOW\n");
        return;
    }
    
    int value;
    printf("Enter element to be pushed: ");
    scanf("%d", &value);
    (*top1)++;
    stack += *top1;
    *stack = value;
} 

void pushRev(int *stack, int *top1, int *top2){
    if (*top1+1 == *top2){
        printf("STACK OVERFLOW\n");
        return;
    }
    
    int value;
    printf("Enter element to be pushed: ");
    scanf("%d", &value);
    (*top2)--;
    stack += *top2;
    *stack = value;
} 

void popFront(int *stack, int *top){
    if (*top == -1){
        printf("STACK UNDERFLOW\n");
        return;
    }

    stack += *top;
    (*top)--;
    printf("%d popped from stack 1\n", *stack);
}

void popRev(int *stack, int *top){
    if (*top == MAXSIZE){
        printf("STACK UNDERFLOW\n");
        return;
    }

    stack += *top;
    (*top)++;
    printf("%d popped from stack 2\n", *stack);
}

void displayFront(int *stack, int *top){
    if (*top == -1){
        printf("EMPTY STACK\n");
        return;
    }

    printf("Stack 1: ");
    for(int i=0; i<=*top; i++)
        printf("%d ", stack[i]);
    printf("\n");
}

void displayRev(int *stack, int *top){
    if (*top == MAXSIZE){
        printf("EMPTY STACK\n");
        return;
    }

    printf("Stack 2: ");
    for(int i=MAXSIZE-1; i>=*top; i--)
        printf("%d ", stack[i]);
    printf("\n");
}