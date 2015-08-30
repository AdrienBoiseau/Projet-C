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
    
    printf("Age de la noob : %d\n",adrien_age);
    printf("test %c\n",lettre);
    printf("%s\n",nom);
    
    /*Long commentaire
     utilisé
     ceci
     */
    //Les conditions
    int var1 = 1;

    if(var1 == 1) {
        printf("Var1 est équivalent à 1 ça marche :D\n");
    } else {
        printf("Var1 n'est pas équivalent");
    }
    //Fin du programme
    
    return 0;
}