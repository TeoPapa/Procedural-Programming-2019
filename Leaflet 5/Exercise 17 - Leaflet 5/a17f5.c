 #include <stdio.h>
 #include "simpio.h"
 #include "genlib.h"

 #define std 10 // The students
 #define les 3 // The lessons


 void GradeReading( int g[][les]);

 void Student( int k, int A[][les], int *x, int *y);

 float PresentageCalculation( int x );

 float AverageScore( int x, int g[][les]);

 main()
 {
     int grades[std][les], exc, fail, i;
     float excelled, failed;

     GradeReading( grades );

     exc = 0;
     fail = 0;

     for( i = 0; i < std; i++)
        Student( i, grades, &exc, &fail);

     failed = (double) fail * 10;
     excelled = (double) exc * 10;
     printf("Plithos apotyxonton: %d  %2.2f%%\n", fail, failed);
     printf("Plithos aristoyxon: %d  %2.2f%% \n", exc, excelled);
 }



 void GradeReading( int g[][les] )
 {
     int i, j;

     for( i = 0; i < std; i++)
     {
         printf("Mathitis %d \n-------------- \n", i + 1);
         for( j = 0; j < les; j++)
         {
             printf("Mathima %d:", j + 1);
            g[i][j] = GetInteger();
         }
     }
 }



 void Student( int k, int A[][les], int *x, int *y)
 {
     if( AverageScore( k, A ) < 9.5 )
     {
        *y += 1;
     }
     else if( AverageScore( k, A ) >= 18.5 )
        *x += 1;
 }



 float
  AverageScore( int x, int g[][les])
 {
     int i, sum;

     sum = 0;
     for( i = 0; i < les; i++)
     {
         sum += g[x][i];
     }

     return sum / 3.0 ;
 }
