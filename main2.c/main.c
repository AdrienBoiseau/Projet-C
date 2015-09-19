#include <stdio.h>

typedef enum
{
    RETRAIT, DEPOT, DEPOTRETRAIT
} Transaction;

int main (void) {
    float solde;
    float somme;
    float somme2;
    
    solde = 120.50;
    
    Transaction typeOperation = DEPOTRETRAIT;
    
    somme = 35.5;
    somme2 = 12;
    
    float interet = 1.5;
    
    if (typeOperation == RETRAIT) {
        solde=solde-somme;
        printf ("Vous avez effectué un retrait, votre solde : %f\n",solde);
    }
    else if (typeOperation == DEPOT) {
        solde=solde+somme;
        printf ("Vous avez effectué un dépôt, votre solde : %f\n",solde);
    }
    else if (typeOperation == DEPOTRETRAIT) {
        solde = (solde + somme) - somme2;
        solde = solde + ((solde/100) * interet);
        
        printf ("Vous avez effecuté un dépôt et un retrait et votre compte à reçu un intérêt, votre solde : %f\n", solde);
    }
    
    return 0;
}
