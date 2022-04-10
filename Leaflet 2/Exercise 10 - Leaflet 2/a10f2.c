#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

main()
{
    int code, pagio;
    long now_ind, old_ind, kat, cost_cent, cost_eur;
    double fpa, cost;

    printf("Dwse ton kwdiko kathgorias timologiou: ");
    code = GetInteger();

    printf("Dwse thn parousa endeixh toy metrthth: ");
    now_ind = GetLong();

    printf("Dwse thn prohgoumenh endeixh toy metrhth: ");
    old_ind = GetLong();

    kat = now_ind - old_ind;

    if( (kat >= 1) && (kat <= 200) )  cost_cent = kat * 12;

    else if( kat <= 500 ) cost_cent = kat * 15;

    else if( kat <= 1500) cost_cent = kat * 20;

    else if( kat <= 10000) cost_cent = kat * 30;

    if( (code = 1) || (code = 2) ) pagio = 20;

    else if( code = 3) pagio = 100;

    cost_eur = cost_cent / 100;
    fpa = (cost_eur + pagio) * 18.0 / 100;
    cost = cost_eur + pagio + fpa;

    printf("Katanalwsh reumatos se monades: %ld \n", kat);
    printf("Axia reumatos (cent): %ld \n", cost_cent);
    printf("Pagio (eyro): %d \n", pagio);
    printf("FPA(euro): %g \n", fpa);
    printf("Synoliko poso plhrwmhs (euro): %g \n", cost);
}
