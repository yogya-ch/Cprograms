//This is the program for copying a string to a destination.
// strcpy(d,s) is a buitin function in the string.h . s-source and d-Destination

#include<stdio.h>

void mystrcpy(char* , char*);

int main()
{
    char source[20];
    char destination[20];
    printf("Give a string : ");
    scanf("%[^\n]s",source);
    mystrcpy(destination,source);
    printf("%s\n",destination);
}

void mystrcpy(char* x,char* y){
    int i=0;
    do{
        x[i]=y[i];
        i++;
    }
    while(y[i]!='\0');
}
