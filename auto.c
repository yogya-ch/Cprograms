// Auto is where the declared variable is stored in stack and is freed once the execution of block ends.
// In C , by default the variables are in auto storaged class;

#include <stdio.h>

void add(int x){
    int sum=0;
    sum=sum+x;
    printf("%d\n",sum);
}
// Sum doesn't retain its value as it gets freed after each function call and gets newly created for next one


int main()
{
    auto int a=20;
    int b=10;
    auto int* p;
    p=&a;
    {
        auto int* p;         //This p is different fromthe above one. Same goes to a.
        auto int a=30;
        p=&a;
        printf("%d\n", a);
        printf("%d\n",*p);
    }                        // p and a are freed.
    printf("%d\n",*p);
    printf("%d\n",a);
    add(a);
    add(b);
}


