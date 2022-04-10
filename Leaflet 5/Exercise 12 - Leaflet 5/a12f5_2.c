 #include <stdio.h>
 #include "simpio.h"
 #include "genlib.h"

 #define k 300
 #define l 200

 main()
 {
     double b[k][l];
     int i, j;

     for( i = 0; i <= k; i++)
     {
         for( j = 0; j <= l; j++)
         {
             b[i][j] = 0.0;
         }
     }

     printf(" %d ", b[1][1]);
 }
