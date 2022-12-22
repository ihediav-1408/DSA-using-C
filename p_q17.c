#include <stdio.h>
#include <string.h>

void concatenate(char a[], char b[])
{
    printf("\nAfter concatenating: %s", strcat(a,b));
}

void copy(char a[])
{
    char s[20];
    printf("\nThe Third string After copying: %s", strcpy(s,a));
}

void length(char a[])
{
    printf("\nThe length of the string %s is %d", a, strlen(a));
}

int main()
{
    char s1[] = "KIIT";
    char s2[] = "UNIVERSITY";
    char s3[20];
    length(s1);
    length(s2);
    concatenate(s1,s2);
    copy(s1);
    return 0;
}