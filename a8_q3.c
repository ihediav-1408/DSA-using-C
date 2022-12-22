#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int stack[100];
int top = -1;
void push(int ele)
{
    top++;
	stack[top] = ele;
}
int pop()
{
	int ele = stack[top];
    top--;
	return ele;
}

int evaluatePostfix(char *ch)
{
	int val1, val2, res;
	while (*ch != '\0'){
		if (isdigit(*ch))
			push(*ch - '0');
		
		else{
			val1 = pop();
			val2 = pop();
			switch(*ch){
				case '+':
					res = val1 + val2;
					break;
				case '-':
					res = val2 - val1;
					break;
				case '*':
					res = val2 * val1;
					break;
				case '/':
					res = val2 / val1;
					break;
				default:
					printf("INVALID INPUT\n");
					exit(1);
            }
			push(res);
		}
		ch++;
	}
	return pop();
}
int main()
{
	char postfixExpression[100];
	printf("\nEnter postfix expression: ");
	scanf("%s", postfixExpression);
	int res = evaluatePostfix(postfixExpression);
	printf("The result of postfix expression %s is = %d\n", postfixExpression, res);
	return 0;
}