#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

int main (void) {
    float solde;
    float somme;
    float somme2;
    
    solde = 120.50;
    
    Transaction typeOperation = getType();
    
    somme = 35.5;
    somme2 = 12;
    
    float interet = 1.5;
    
    if (typeOperation == RETRAIT) {
        solde = solde - somme;
        printf ("Vous avez effectué un retrait, votre solde : %.2f\n",solde);
    }
    else if (typeOperation == DEPOT) {
        solde = solde + somme;
        printf ("Vous avez effectué un dépôt, votre solde : %.2f\n",solde);
    }
    else if (typeOperation == DEPOTRETRAIT) {
        solde = (solde + somme) - somme2;
        solde = solde + ((solde/100) * interet);
        
        printf ("Vous avez effecuté un dépôt et un retrait et votre compte à reçu un intérêt, votre solde : %.2f\n", solde);
    }
    
    return 0;
}

Transaction getType(void) {
    char type;
    
    printf("Type d'operation : \n");
    printf("0 = RETRAIT\n");
    printf("1 = DEPOT\n");
    printf("2 = DEPOT RETRAIT\n");
    
    scanf("%s", &type);
    
    if(type == '0') {
        return RETRAIT;
    } else if(type == '1') {
        return DEPOT;
    }
    
    return DEPOTRETRAIT;
}

