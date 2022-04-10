 #include <stdio.h>
 #include "simpio.h"
 #include "genlib.h"

 const long fk[8] = { 0, 5220, 7320, 9720, 17000, 21950, 29550, 42450, 52250}; /* Diavasa sto internet pws na kanw define enan pinaka kai brhka
                                                                                afton ton tropo. Edw kanw define ton pinaka me ton klimakoto foro*/
 const int pr [9] = { 0, 18, 21, 24, 28, 33, 38, 43, 49, 50}; // Edw ginetai define o pinakas me to pososto

 long foros( long m ); // H synarthsh foros gia ton ypologismo tou forou

 main()
 {
    long inc, sf;

    printf("Dose to ethsio eisodhma: ");
    inc = GetLong();

    sf = foros( inc );
    printf( "O synolikos foros einai: %ld", sf);
 }


 long foros( long m )
 {
     long for1, for2;

     if( m <= 10000)
     {
         for1 = fk[0];
         for2 = m * pr[0];
     }
     else if ( m <= 39000)
     {
         for1 = fk[0];
         for2 = ( m - 10000 ) * pr[1] / 100;
     }
     else if ( m <= 49000 )
     {
         for1 = fk[1];
         for2 = ( m - 39000 ) * pr[2] / 100;
     }
     else if ( m <= 59000 )
     {
         for1 = fk[2];
         for2 = ( m - 49000 ) * pr[3] / 100;
     }
     else if ( m <= 85000 )
     {
         for1 = fk[3];
         for2 = ( m - 59000 ) * pr[4] / 100;
     }
     else if ( m <= 100000 )
     {
         for1 = fk[4];
         for2 = ( m - 85000 ) * pr[5] / 100;
     }
     else if ( m <= 120000 )
     {
         for1 = fk[5];
         for2 = ( m - 100000 ) * pr[6] / 100;
     }
     else if ( m <= 150000 )
     {
         for1 = fk[6];
         for2 = ( m - 120000 ) * pr[7] / 100;
     }
     else if ( m <= 170000 )
     {
         for1 = fk[7];
         for2 = ( m - 150000 ) * pr[8] / 100;
     }
     else
     {
         for1 = fk[8];
         for2 = ( m - for1 ) * pr[9] / 100;
     }
     printf("%ld Euro \n%ld Euro \n", for1, for2);

     return for1 + for2;
 }
