#include <stdio.h>
#define RETRAIT 1
#define DEPOT 2
#define DEPOTRETRAIT 3

int main (void) {
    float solde;
    float somme;
    float somme2;
    int typeOperation;
    solde=120.50;
    typeOperation=DEPOTRETRAIT;
    somme=35.5;
    somme2=12;
    float interet;
    interet=1.5;
    if (typeOperation==1) {
        solde=solde-somme;
        printf ("Vous avez effectué un retrait, votre solde : %f\n",solde);
        
    }
    else if (typeOperation==2) {
        solde=solde+somme;
        printf ("Vous avez effectué un dépôt, votre solde : %f\n",solde);
        
    }
    else if (typeOperation==3){
        solde=(solde+somme)-somme2;
        solde=solde+((solde/100)*interet);
        printf ("Vous avez effecuté un dépôt et un retrait et votre compte à reçu un intérêt, votre solde : %f\n",solde);
    }
    return 0;
}
