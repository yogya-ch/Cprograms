//Nested structures

#include<stdio.h>

struct point {
    int x;
    int y;
}pt;

struct rectangle {
    struct point one;
    struct point two;
}rect;

int main(){
    printf("First point : ");
    scanf("%d,%d",&rect.one.x,&rect.one.y);    // rect is of type struct rectangle which has one and two,
    printf("Second point : ");                 // similarly one again is of type struct point which has x and y.
    scanf("%d,%d",&rect.two.x,&rect.two.y);
    
    printf("%d,%d\n",rect.one.x,rect.one.y);
    printf("%d,%d\n",rect.two.x,rect.two.y);

    return 0;
}
