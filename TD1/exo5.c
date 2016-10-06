#include <stdio.h>
int main()
{
	int n,i,s=0;
	printf("donner le nombre n :");
	scanf("%d",&n);
	for(i=2;i<(n/2);i++)
	{ if(n%i==0)
		s=s+i;
		}
  if(s==0)
  printf("le nombre %d est un nombre premier \n",n);
  else printf("le nombre %d n'est pas premier :",n);
	
	
	return 0;
	}
