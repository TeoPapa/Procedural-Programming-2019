 #include <stdio.h>
 #include "simpio.h"
 #include "genlib.h"

 #define m 10
 #define n 3

 int main()
 {
     int i, j;
     double  nat_avg;
     double temper[m][n] =
     {
        { 10, 20, 30,}
        { 40, 50, 60,}
        { 70, 80, 90,}
        { 10, 20, 30,}
        { 40, 50, 60,}
        { 70, 80, 90,}
        { 10, 20, 30,}
        { 40, 50, 60,}
        { 70, 80, 90,}
        { 00, 00, 00 }
     }

     printf(" %g", temper[0][0])

     for( i = 0; i < 10; i++)
     {
         for( j = 0; j < 3; j++)
         {
             nat_avg += temper[i][j];
         }
     }

     nat_avg /= 30;
     printf("%g \n", nat_avg);

     for( i = 0; i < 10; i++)
     {
         average[i] = 0;
         for( j = 0; j < 3; j++)
         {
             average[i] += temper[i][j];
         }
         average[i] /= 3;
         printf("%g \n", average[i]);
     }
 }
