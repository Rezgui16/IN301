	#include <stdio.h>

int main()
{
	int x,y,z=0;
	int s=0;	
	
	printf("donner la valeur de x et y :");
	scanf("%d%d",&x,&y);
	while(x!=1)
	{ 
		if(x%2==0)
			{
			s=x/2*2*y+z;
			x=x/2;
			y=2*y;}
		else 
			{   
			 x=x-1;
			 z=z+y;
			 s=x*y+z;
				}
			}
				
	
	printf("la multiplication de x et de y est :%d \n",s);
	return 0;
}

