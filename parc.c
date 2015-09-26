//
//  parc.c
//  main2.c
//
//  Created by Adrien Boiseau on 26/09/2015.
//  Copyright © 2015 Adrien Boiseau. All rights reserved.
//

#include "parc.h"
#include <stdio.h>

#define AGE 10
#define HEURE 14

int parc(void) {
    float prix;
    prix=6;
    if (AGE<5) {
        printf ("Vous n'avez pas besoin de payer\n");
        
    }
    else if (AGE>=5) {
        if (HEURE<9) {
            printf("Parc fermé\n");
        }
        else if (HEURE>=19) {
            printf("Parc fermé\n");
        }
        else if (HEURE<=13) {
            printf("Vous devez payer : 18 Euros\n");
        }
        else {
            prix=6+((19-HEURE)*2);
            printf("Vous devez payer : %.2f\n",prix);
        }
    }
    
    return 0;
}

