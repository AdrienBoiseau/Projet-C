#include<stdio.h>

int main(void)
{
    //Début du programme
    int adrien_age = 18;
    adrien_age = adrien_age + 1; //Ajoute 1 ans sur l'âge de départ
    
    // autre facon de faire
    adrien_age += 1; // égale adrien_age = adrien_age + 1
    adrien_age++; // ++ incrémente de 1
    
    char lettre = 'a';
    char nom[10] = "testdelol";
    nom[2] = '?'; //Remplace la lettre numéro 2 par un "?"
    
    printf("Age de Adrien : %d\n",adrien_age);
    printf("test %c\n",lettre);
    printf("%s\n",nom);
    //Les conditions
    int var1=1;
    
    if(var1==1) {
        printf("Var1 est équivalent à 1\n");
    } else {
        printf("Var1 n'est pas équivalent");
    }
    // !(var1==1) Pareil que var1!=1
    
    int var2=2;
    
    if( !(var2==2) ){
        printf("IF\n");
    } else {
        printf("ELSE\n");
    }
    
    int var3=3;
    
    if( var3!=3 ) {
        printf("IF\n");
    } else {
        printf("\tELSE\n"); // "\t fait une tabulation
    }
    //Conditions 2
    
    int taille=10;
    
    if( taille==10 ){
        printf("MOYEN\n");
    }
    else {
        printf("ELSE\n");
        
        if( taille>10 ){
            printf("GRAND\n");
        }else {
            printf("PETIT\n");
        }
    }
    //Les boucles
    
    int i=0;
    
    while (i<=10){
        printf ("%d\n",i);
        i++;
    }
    
    //Autre méthode
    
    int f;
    
    for(f=0;f<=10;f++){
        printf ("%d\n",f);
    }
    
    //Exercice pratique
    char var='p';
    /*if (var=='a')printf("Voyelle\n");
        else if(var=='e')printf("Voyelle\n");
        else if(var=='i')printf("Voyelle\n");
        else if(var=='o')printf("Voyelle\n");
        else if(var=='u')printf("Voyelle\n");
        else if(var=='y')printf("Voyelle\n");
    else printf("Consonne\n");
    }*/
    
    switch (var) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            printf("Voyelle\n");
            break;
        default:
            printf("Consonne\n");
            break;
    }
    
    //Fin du programme
}
