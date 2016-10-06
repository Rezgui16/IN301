#include <stdio.h>
#include <stdlib.h>
void coversion(int s)
{int h,m;
	h=s/3600;
	s=s%3600;
	m=s/60;
	s=s%60;
	printf("%d seconde vaut %d heures vaut %d minutes vaut et % secondes \n",h*3600+m*60+s,h,m,s);
	
	}
	void main()
	
	{ int s;
		printf("donner le nombre de secondes");
		scanf("%d",&s);
		conversion(s);
		}
