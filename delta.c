//
//  delta.c
//  main2.c
//
//  Created by Adrien Boiseau on 26/09/2015.
//  Copyright © 2015 Adrien Boiseau. All rights reserved.
//

#include "delta.h"
#include <stdio.h>
#include <math.h>

int delta(void) {
    
    float a;
    printf("a=?\n");
    scanf ("%f", &a);
    
    float b;
    printf("b=?\n");
    scanf ("%f", &b);
    
    float c;
    printf("c=?\n");
    scanf ("%f", &c);
    
    float x1;
    x1=0;
    
    float x2;
    x2=0;
    
    float delta;
    //CALCUL DE DELTA
    
    delta = (b*b)-(4*a*c);
    printf ("Delta = %.2f\n",delta);
    
    
    //DEBUT DES CONDITIONS
    if (a==0) {
        if (b==0)
        {
            if (c==0) {
                printf("Il y a une infinité de solution \n");
            }
            else {
                printf("il n'y a aucune solutions \n");
            }
        }
        else {
            x1=-c/b;
            printf("il y a une solution : %.2f\n",x1);
        }
    }
    //DELTA SUPERIEUR A 0
    else {
        if (delta>0)
        {
            x1 = (-b - sqrt(delta))/(2*a);
            x2 = (-b + sqrt(delta))/(2*a);
            printf("les deux racines sont : x1 = %.2f et x2 = %.2f \n",x1, x2);
        }
        //DELTA EGAL A 0
        else if (delta==0)
        {
            x1 = -b /(2*a);
            printf("la solution unique est x = %.2f \n",x1);
        }
        // DELTA INFERIEUR A 0
        else
        {
            printf("l'équation n'admet pas de solution\n");
        }
    }
    
    return 0;
}

