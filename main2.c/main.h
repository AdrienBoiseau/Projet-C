//
//  main.h
//  main2.c
//
//  Created by Paul on 19/09/2015.
//  Copyright © 2015 Adrien Boiseau. All rights reserved.
//

#ifndef main_h
#define main_h

typedef enum
{
    RETRAIT, DEPOT, DEPOTRETRAIT
} Transaction;

Transaction getType(void);

#endif /* main_h */
