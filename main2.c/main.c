#include<stdio.h>

int main(void) {

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
    
    /*Long commentaire
     utilisé
     ceci
     */
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
    //Fin du programme
}

