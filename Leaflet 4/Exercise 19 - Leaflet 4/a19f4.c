 #include <stdio.h>
 #include <math.h>
 #include "simpio.h"
 #include "genlib.h"

 #define num 1000

 double p_calc( int x );

 main()
 {
     double p;

     p = p_calc( num );
     p *= 2;
     printf(" pi=%f ", p);
 }

 double p_calc( int x)
 {
     int i;
     double pi;

     pi = 1;

     for( i = 2; i <= x; (i += 2) )
     {
         pi *= pow( i, 2 ) / (double)((i - 1) * ( i + 1));
     }

     return pi;
 }
