#include<stdio.h>
#include<stdlib.h>

typedef struct employee {
    int ssn;
    char name[10];
    char dept[5];
}emp;

void read(emp*,int);
void display(emp*,int);


int main(){
    int n;
    printf("Give the number of employees ");
    scanf("%d",&n);
    emp a[n];
    emp *ptr;
    ptr=(emp*)malloc(n*sizeof(emp));
    read(ptr,n);
    display(ptr,n);
    free(ptr);
}

void read(emp *x,int y){
    int i;
    for(i=0;i<y;i++){
        printf("SSN: ");
        scanf("%d",&(x+i)->ssn);
        printf("name: ");
        scanf("%s",(x+i)->name);
        printf("dept: ");
        scanf("%s",(x+i)->dept);
        
    }
}


void display(emp *x,int y){
    int i;
    for(i=0;i<y;i++){
        printf("SSN: %d\t",(x+i)->ssn);
        printf("name: %s\t",(x+i)->name);
        printf("dept: %s\n",(x+i)->dept);
        
        
    }
    
}

