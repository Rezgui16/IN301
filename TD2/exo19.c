#include <stdio.h>
#include <stdlib.h>

struct element
  { int val;
  struct element * suiv;
  
       };

typedef struct element Element;
typedef Element * liste;

liste creer_liste()
{ return NULL;}


int estvide(liste l)
{ 
	return l==NULL;}
	
void liberer(liste l)
{ liste p;
	while(!estvide(l))
	{ p=l->suiv;
		free(l);
		l=p;}
	}
	

	
liste ajout_deb(liste l,int e)
{ liste l2;
	l2=malloc(sizeof(Element));
	if(l2==NULL)
	{printf("memoire insuffisante");
	exit(EXIT_FAILURE);}
	else{
	l2->val=e;
	l2->suiv=l;}
	return l2;
	}
	
//je deteste la recursvité 	
liste ajout_fin(liste l,int e)
{ if(estvide(l))
	return ajout_deb(l,e);
	l->suiv=ajout_fin(l->suiv,e);
	
		return l;}
		
liste ajout_fin2(liste l,int e)
{ liste s,p;
  s=malloc(sizeof(Element));
  s->val=e;s->suiv=NULL;
  if(estvide(l))
   return s;
   p=l;
   while(!estvide(p->suiv))
    p=p->suiv;
    p->suiv=s;
   
	return l;}		
		
int nbr_elmt(liste l)
{ int nbr=0;
	if(estvide(l))
	return 0;
	while(!estvide(l)){
	nbr=nbr+1;
	l=l->suiv;}
	return nbr;}
//tester le tris croissant	
int esttrie1(liste l)
{ if(estvide(l)||estvide(l->suiv))
	return 1;
	if(l->val>l->suiv->val)
	return 0;
	return esttrie1(l->suiv);
	}
//tester le tri decroissant
int esttrie2(liste l)
{ if(estvide(l)||estvide(l->suiv))
	return 1;
	if(l->val<l->suiv->val)
	return 0;
	return esttrie2(l->suiv);
	}
	

int rech_val(liste l,int val)
{
	if(estvide(l))
	return 0;
while(!estvide(l))
	{ 
		if(l->val!=val)
		  l=l->suiv;
		else 
		  return 1;
		}
		return 0;
		}
liste supp_elt(liste l , int e)
{ liste p;
	if(estvide(l)) return l;
	if(l->val==e)
	 {p=l->suiv;
	 free(l);
	 return p;}
	l->suiv=supp_elt(l->suiv,e);
	return l;
	}

//conacaténation de deux listes
liste concat(liste l1,liste l2)	
{liste l;
	
	if(estvide(l1)) //je suppose avoir une des liste vide
	return l2;
	l=l1;
while (l1->suiv!=NULL)	
	l1=l1->suiv;
	l1->suiv=l2;
	return l;}

liste tri_bulle(liste l)
{ 
	int taille=nbr_elmt(l);
	if(taille<=2) return 1;
	int i,j;
	liste p=l;
	liste q;
	for(i=taille;i>0;i--)
	{l=p;
	if(l->val>l->suiv->val){
		q=l->suiv;
		l->suiv=l->suiv->suiv;
		q->suiv=l;
		p=q;
		l=p;}
		for(j=0;j<i-1;j++)
		{if(l->suiv->val>l->suiv->suiv->val)
			{ q=l->suiv;
				l->suiv=l->suiv->suiv;
				q->suiv=l->suiv->suiv;
				l->suiv->suiv=q;}
				l=l->suiv;
			}
			}
			return p;}
	 
	
void affiche_liste(liste l)
{ 
	while (!estvide(l))
	{printf("%d ",l->val);
	l=l->suiv;}
	}
			
int main(){
 int s,val,i,n,e;
 liste l=creer_liste();
 liste l2=creer_liste();

	printf("le nombre d'element à ajouter:\n");
	scanf("%d",&n);
	
	printf("donner les elemnts à remplir dasn l1:\n");
	for(i=0;i<n;i++)
		{scanf("%d",&val);
			
	l=ajout_fin2(l,val);}
	printf("donner les elemnts à remplir dasn l2:\n");
	for(i=0;i<n;i++)
		{scanf("%d",&val);
			
	l2=ajout_deb(l2,val);}
		
 printf("\nl'affichage de l1 est:\n");
 affiche_liste(l);
 printf("\nl'affichage de l2 est:\n");	
 affiche_liste(l2);
 	
s=nbr_elmt(l);
printf("\nle nombre 'element de la liste est :%d ",s);
	
 if(esttrie1(l)==1)
printf("\nle tableau est trié par ordre croissant");
else 
   if(esttrie2(l)==1)
     printf("\nle tableau est trié par ordre decroissant");
       else printf("le tableau n'est pas trié");
       
printf("\ndonner la valeur à chercher dans l2: ");
scanf("%d",&val);
  if(rech_val(l2,val)==1)
   printf("la valeur existe dans la liste\n");
else printf("la valeur n'existe pas dans la liste\n");

printf("la liste l2 trié est: ");      
tri_bulle(l2);
affiche_liste(l2);

printf("\ndonner la valeur à supprimer : ");
scanf("%d",&e);
supp_elt(l,e);
affiche_liste(l);

printf("\nles deux liste concaténées sont: ");
concat(l,l2);
affiche_liste(l);



liberer(l);
	return 0;
	
	}	
