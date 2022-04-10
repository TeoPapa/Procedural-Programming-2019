 #include <stdio.h>
 #include "simpio.h"
 #include "genlib.h"

 #define k 30 //Max students
 #define l 10 //Max subjects

 double score( int x, int y, double array[k][l]); // For the calculation of the average score

 void swap_array( double x[k][l]); // For swapping the matrix from 100 to 20

 void printing( int m, int n, double x, double y, double array[k][l], double array2[k][l]); // For the printing of the results

 main()
 {
     int m, n; //Students, subjects
     int i, j;
     double s100, s20; // Average score, Average score in the 20 form
     double b[k][l]; // Score
     double b20[k][l]; // Score in the 20 form

     printf("Dwse ton arithmo twm mathitwn: ");
     m = GetInteger();

     printf("Dwse ton arithmo twn thematwn: ");
     n = GetInteger();

     for( i = 0; i < m; i++)
     {
         for( j = 0; j < n; j++)
         {
             printf("Dwse thn bathmologia  tou %d thematos tou %d mathiti: ", j+1, i+1);
             b[i][j] = GetReal();
             b20[i][j] = b[i][j];
         }
     }

     swap_array( b20 );

     for( i = 0; i < m; i++)
     {
         s100 = score( i, n, b);
         s20 = score( i, n, b20);
         printing( i, n, s100, s20, b, b20);
     }
 }



 double score( int x, int y, double array[][l])
 {
    int i;
    double sum = 0;

    for( i = 0; i < y; i++)
    {
        sum += array[x][i];
    }
    return sum/y ;
 }



 void swap_array( double x[][l])
 {
     int i, j;

     for( i = 0; i < k; i++)
     {
         for( j = 0; j < l; j++)
         {
             x[i][j] /= 5;
         }
     }
 }



 void printing( int m, int n, double x, double y, double array[][l], double array2[][l])
 {
     int i;

     for( i = 0; i < n; i++)
     {
         printf(" %6.1lf", array[m][i]);
     }
     printf(" %6.1lf\n", x);

     for( i = 0; i < n; i++)
     {
         printf(" %6.1lf", array2[m][i] );
     }
     printf(" %6.1lf \n", y);
 }
