#include <stdio.h>
#include <stdlib.h>
#include <time.h>

   struct Tableau
    { int taille;
    int tab [100];
	};

//fonction aleatoire	
    int alea(int n)
   { 
    return rand()%n;
	 }	
//fonction produit
int pro_duit(struct Tableau t)
{ int p=1;
	for(int i=0;i<t.taille;i++)
	p=p*t.tab[i];
	return p;
	}
 //fonction min
   int mini(struct Tableau t) 
   { int minim=t.tab[0];
	   for(int i=0;i<t.taille;i++)
	    {if(minim>t.tab[i])
	    minim=t.tab[i];}
	    return minim;
	    }  
//fonction décalage
void decalage(struct Tableau* t) 
{(*t).taille++;int i;
	for(i=(*t).taille-1;i>-1;i--)
	(*t).tab[i]=(*t).tab[i-1];
	(*t).tab[0]=0;
	
	}
//fonction tri
struct Tableau tri_tab(struct Tableau t)
{   int val,i,j;
	   for(i=0;i<t.taille;i++)
		 {for(j=t.taille-1;j>i;j--)
		  {if (t.tab[j-1]>t.tab[j])
	   {val=t.tab[j-1];
	  t.tab[j-1]=t.tab[j];
	  t.tab[j]=val;}}}
	  
	  for(i=0;i<t.taille;i++)
	  printf("%d ",t.tab[i]);
	  return t;
	 }
	
  
	
		 
int main()
{ 
	struct Tableau t;
	  printf("la taille de la structure est:%d\n",sizeof(t));
	  int n;
	  printf("\ndonner la valeur de n :\t");scanf("%d",&n);
	
//affichage d'une valeur aléatoire	
      srand(time(NULL));
      printf("\nla valeur aleatoire entre 0 et n est:%d \n ",alea(n));
    
   
 //remplissage du tableau
       printf("\nla talle du tableau est: ");
       scanf("%d",& t.taille);
       
	   for(int i=0;i<t.taille;i++)
	   { t.tab[i]=alea(n);
		    printf("%d ",t.tab[i]);}

		
//le produit du tableau			
printf("\nle produit des elements du tableau t est:%d\n",pro_duit(t));

//le minmum du tableau
printf("\nle minimum est:%d\n",mini(t));

	
printf("le tableau trié est:\t");
tri_tab(t); 
  
 
}
