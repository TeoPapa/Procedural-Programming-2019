 #include <stdio.h>
 #include "simpio.h"
 #include "genlib.h"

 #define k 30 //Max mathites
 #define l 10 //Max themata

 main()
 {
     int m, n; //Mathites, Themata
     int i, j;
     double b[k][l]; //Vathmologia

     printf("Dwse ton arithmo twm mathitwn: ");
     m = GetInteger();

     printf("Dwse ton arithmo twn thematwn: ");
     n = GetInteger();

     array_reading( m, n, b);


 }





 void array_reading( int m, int n, double b[][l])
 {
     int i, j;

     for( i = 0; i < m; i++)
     {
         for( j = 0; j < n; j++)
         {
             printf("Dwse thn bathmologia  tou %d thematos tou %d mathiti: ", j+1, i+1);
             b[i][j] = GetReal();
         }
     }
 }
