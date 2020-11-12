#include<stdio.h>
#include<ctype.h>
#include "fonctMax.h"

int main() {
    
    int x,y;
	
   printf("Entrer les deux entiers a comparer \n");
   /* On vérifie si scanf renvoie bien 1 */
	while (scanf("%d", &x) != 1 || scanf("%d", &y) != 1 || y==x) {
		/* Si ce n'est pas le cas,
		 * on vide le buffer, et on redemande avec la boucle while*/
	printf("Entrez des valeurs  differentes et de type entier \n");
		char c;
		while ((c=getchar()) != '\n' && c != EOF);
	}
   printf("Le max entre %d et %d est %d\n", x,y,fonctMax(x,y));

   return 0;
}