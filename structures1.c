//Structures are one or more variables grouped together under a single name for convinoent handling.
//They help in organising complicated data.
//Structures may be copied ,assigned to ,passed to functions and returned by functions.

#include<stdio.h>

struct point {              //Sturture for points on coordinate system
    int x;
    int y;
}a;

/*
struct {                    // The name of the structure is not necessity but is prefered
    int x;
    int y;
}a;
 */

// A struct declaration defines a type.
// The variables of the type are given by :-
// struct point var;    separately (or)
// struct point {......}var;   along with declaration.

int main(){
    scanf("%d,%d",&a.x,&a.y);       //To save the values of point a we need both the coordinates.
    printf("%d,%d\n",a.x,a.y);      //The members in a stucture are accessed --  var.member
}

