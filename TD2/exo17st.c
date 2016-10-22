#include <stdio.h>
#include <stdlib.h> 




void reinitpointeur(int*p)
{
	p=NULL;}
	

void f(int* a,int* b)
{ int c;
	c=*a;
	*a=*b ;
	*b=c;
	
	}


int main()

{   int a,b; 
	
	
	printf("donner la valeur de a et b :");
	scanf("%d%d",&a,&b);
	f(&a,&b);
	printf("permuter a et b :%d %d \n",a,b);
	 
	a=1;
	int*p=&a;
	reinitpointeur(p);
	printf("%p\n",p);
	
	}
	
	
	
