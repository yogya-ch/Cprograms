//Program for strlen
//It is a built in function, in string.h, used to find the length of the string excluding the null charecter.

#include<stdio.h>

int mystrlen(char*);

int main()
{
    char a[20];
    int result;
    printf("Give a string : ");
    scanf("%[^\n]s",a);                // This allows the scanf to include spaces
    result=mystrlen(a);
    printf("Length = %d\n",result);
}
int mystrlen(char* x)
{
    int i;
    for(i=0;x[i]!='\0';i++);
    return i;
}
