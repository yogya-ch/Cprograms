//Relation between arrays and pointers

#include<stdio.h>

int main(){
    char array[2]={0,1};
	int i=0;
    for(i=0;i<2;i++){
		printf("adress of array %d : %p\n",i,&array[i]);
        printf("value in array %d : %d\n",i,array[i]);
    }
    printf("adress of array 0 : %p\n",array);
    printf("value in array 0 : %d\n",*array);
    
    // so we understand that array = &array[0] and *array=array[0]
}
