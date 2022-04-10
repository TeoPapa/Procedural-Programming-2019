  #include <stdio.h>
  #include "simpio.h"
  #include "genlib.h"

  main()
  {
     double mil, lit, kat;

     printf("Dose milia:");
     mil = GetReal();

     printf("Dose litra:");
     lit = GetReal();

     kat = lit / mil;
     if( kat >= 0 & kat < 0.9)
     {
        printf("Poli Xamili");
     }
     else if ( kat < 1.2 )
     {
        printf("Xamili");
     }
     else if ( kat < 1.8 )
     {
        printf("Kanoniki");
     }
     else if( kat >= 1.8)
     /* Ebala else if giati ean bgainei mikrotero tou midenos
      * den pairnetai (den mporw na kserw an tha grapsei arnitiko
      * kai as mhn ginetai ta milia i ta litra na einai arnitika)*/
    {
        printf("Ypsili");
    }
  }
