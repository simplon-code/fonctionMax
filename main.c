#include<stdio.h>
#include "header.h"
/*
    une fonction qui permets de determiner le maximun entre deux entier a et b
*/


int main(){
    int a , b,c;
    // demander a l'utilisateur de saisir jusqu'a les valeurs soient positive et differernts
    do
    {
        printf("**********************donner des nombres positif*******************************\n");
        printf("entrer a :\n");
        scanf("%d",&a);
        printf("entrer b :\n");
        scanf("%d",&b);
    } while (a==b || a<0 || b<0);
    c=max(a,b);
    
    printf("le plus grand entre %d et %d est %d\n",a,b,c);
}