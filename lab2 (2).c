#include <stdlib.h>
#include <stdio.h>

//eu campion tu cam pion

int function(int x, int *p){
	(*p)++;
	x=x-2;
	if(x<0)
    return x;
	x=function(x,&(*p));
}

int main(){
	int a=30, i=0;

    a=function(a,&i);

	printf("%d", i);
	return 0;
}

