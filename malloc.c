// A program to understand dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>

int main(){
	int *ptr,i,size ,*p;
	scanf("%d",&size);
	ptr=malloc(size*sizeof(int)); //malloc returns pointer of void type so we declared earlier that *ptr is int
	i=0;
	while(i<size)
	{
		ptr[i]=i+1;
        p=&ptr[i]; // can use "p=ptr+i;" also. Because &ptr[0]=ptr
        printf("%d\n",*p);
		i++;
	}
	free(ptr);
	//*ptr=123; --> if executed should show coredump
	return 0;
}
