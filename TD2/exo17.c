#include <stdio.h>

int main()
{ char tab[10],
	printf("la taille des caractéres :%d\n",sizeof(char));
	printf("la taille des entiers %d:\n",sizeof(int));
	printf("la taille des double int %d:\n",sizeof(double));
	printf("la taille  des char * %d:\n",sizeof(char*));
	printf("la taille des int * %d:\n",sizeof(int*));
	printf("la taille des double * %d:\n",sizeof(double*));
	printf("la taille des entiers * * %d:\n",sizeof(int**));
	printf("la taille du tableau des entiers  %d:\n",sizeof(int[]));
	printf("la taille du tableau des char %d:\n",sizeof(char[7][3]));
	
	printf("la taille du tableau des 10 int %d:\n",sizeof(int [10]));
	//affichage des val du tableau
	
	printf("la taille du tableau %d:\n",sizeof(tab));
	printf("la taille du tableau %d:\n",sizeof(tab[0]));
	printf("la taille du tableau %d:\n",sizeof(&tab[0]));
	printf("la taille du tableau %d:\n",sizeof(*&tab));
	printf("la taille du tableau %d:\n",sizeof(*&tab[0]));
	
	 
	
	
	return 0;}
