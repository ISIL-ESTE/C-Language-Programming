#include<stdio.h>
int main()
{float x,y;
int n,i;
printf(" Entrez la valeur de x ");
scanf("%f",&x);
printf(" Entrez la valeurs de n ");
scanf("%d",&n);
y=1;
for(i=1;i<n;i++)
y=y*x ;
printf("%g � la puissance %d est �gal � %g ",x,n,y);
}

