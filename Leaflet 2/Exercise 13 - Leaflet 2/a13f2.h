#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

#define money  5
main()
{
    int coffee, e2, e1, c5, c2, c1;
    double cost, rest;

    printf("Dose kafedes:");
    coffe = GetInteger();

    cost = coffee * 0.70;
    rest = money - cost;

    if( rest > 0 )
    {
        while (rest > 0)
        {
            if (rest >= 2.0)
            {
                e2 ++;
                rest -= 2.0;
            }
            else if (rest >= 1.0)
            {
                e1 ++;
                rest -= 1.0;
            }
            else if (rest >= 0.5)
            {
                c5 ++;
                rest -= 0.5;
            }
            else if (rest >= 0.2)
            {
                c2 ++;
                rest -= 0.2;
            }
            else
            {
                c1 ++;
                rest -= 0.1;
            }
        }
        printf("Resta \n");
        printf("Kermata 2E :%d \n", e2);
        printf("Kermata 1E :%d \n", e1);
        printf("Kermata 50L :%d \n", c5 );
        printf("Kermata 20L :%d \n", c2);
        printf("Kermata 10L :%d \n", c1);
    }
    else printf("den ftanoun ta xrhmata gia tosous kafedes");
}
