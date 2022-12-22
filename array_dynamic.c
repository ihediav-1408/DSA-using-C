#include <stdio.h>
#include <stdlib.h>
void input(int *p,int n)
{
    int i;
    if(p==NULL)
    {
        printf("Memory not allocated.");
        return;
    }
    printf("Enter the elements.");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
}
void output(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",p[i]);
    }
}
void search(int *p,int n, int ele)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(p[i]==ele)
        {
            printf("Element found at %d place.",i+1);
            break;
        }
        else
        {
            printf("Element not found.");
        }
    }
}
int main()
{
    int *p,n,i,ele;
    printf("Enter number of elements.");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    input(p,n);
    output(p,n);
    printf("Enter the element to be searched.");
    scanf("%d",&ele);
    search(p,n,ele);
    free(p);
    return 0;
}