#include <stdio.h>
#include <stdlib.h>

void etoile(int n)
{
	int i,j;


for(i=0;i<n;i++)
{for(j=0;j<n-i-1;j++)
 printf(" ");
printf("*\n");}

}
void main()
{int n;
	printf("donner la valeur de n");scanf("%d",&n);
	etoile(n);
	}

