#include <stdio.h>
#define MAXSIZE 10

void push(int q1[], int q2[], int *, int *, int *, int *);
void pop(int q[], int *, int *);
void display(int *, int *, int *);
int deQueue(int q[], int *, int *);
void enQueue(int q[], int *, int *, int);

int main(){
    int queue1[MAXSIZE], queue2[MAXSIZE];
    int *front1, *front2, *rear1, *rear2;
    int userInput, flag = 1;
    int initializer = -1;
    front1 = front2 = rear1 = rear2 = &initializer;

    while (flag == 1){
        printf("\n-----------------------------------\n");
        printf("1: To push into stack\n");
        printf("2: To pop out of stack\n");
        printf("3: To display stack elements\n");
        printf("4: To exit\n");
        printf("Your choice: ");
        scanf("%d", &userInput);

        switch (userInput){
            case 1:
                push(queue1, queue2, front1, rear1, front2, rear2);
                break;
            case 2:
                pop(queue1, front1, front2);
                break;
            case 3:
                display(queue1, front1, front2);
                break;
            default:
                flag = 0;
                break;
        }
    }
    return 0;
}

void push(int queue1[], int queue2[], int *front1, int *rear1, int *front2, int *rear2){
    int ele, data;
    printf("Enter element to be pushed: ");
    scanf("%d", &ele);

    if (*front1 == MAXSIZE){
        printf("STACK OVERFLOW\n");
        return;
    }

    if (*front1 == -1){
        queue1[++(*front1)] = ele;
        rear1 = front1;
    }

    else{
        for (int i=0; i<=(*rear1); i++){
            data = deQueue(queue1, front1, rear1);
            enQueue(queue2, front2, rear2, data);
        }

        *front1 = 0;
        (*rear1)++;
        queue1[*front1] = ele;
        for (int i=0; i<=(*rear1); i++)
            queue1[++(*front1)] = deQueue(queue2, front2, rear2);
    }
}

void pop(int queue[], int *front, int *rear){
    int poppedEle = queue[*front];
    if (front == rear)
        *front = *rear = -1;
    else
        (*front)++;
}

void display(int queue[], int *front, int *rear){
    if (*front == -1){
        printf("EMPTY STACK\n");
        return;
    }

    printf("Stack: ");
    for (int i=0; i<=*rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

int deQueue(int queue[], int *front, int *rear){
    printf("deQueue called\n"); 
    return queue[(*front)++];
}

void enQueue(int queue[], int *front, int *rear, int ele){
    printf("enQueue called\n");
    if (*front == -1){
        queue[++(*front)] = ele;
        rear = front;
        return;
    }

    queue[++(*rear)] = ele;
}