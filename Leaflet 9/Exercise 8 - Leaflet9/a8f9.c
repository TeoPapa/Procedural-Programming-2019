 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 #include "simpio.h"
 #include "genlib.h"

 typedef struct
 {
     int code;
     double income;
     double new_income;
 }workerT;


 int HowManyWorkers( FILE *inf );

 void WorkersFilling( FILE *inf, workerT A[], int x );

 void FileCreation( FILE *ouf, workerT A[], int x );


 int main()
 {
     workerT *workers;
     FILE *infile;
     FILE *outfile;
     int howmany;

     infile = fopen( "i8f9.dat", "r" );

     if(infile == '\0' ) Error("Can't open i8f9.dat");

     outfile = fopen( "o8f9.dat", "w" );

     howmany = HowManyWorkers( infile );

     workers = (workerT *)calloc( howmany, sizeof( workerT ) );

     WorkersFilling( infile, workers, howmany );

     FileCreation( outfile, workers, howmany );

     free( workers );

     fclose( infile );

     fclose( outfile );


     return 0;
 }



 int HowManyWorkers( FILE *inf )
 {
     int sum = 0;
     char ch;

     while(TRUE)
     {
         ch = getc( inf );
         if( ch == EOF ) break;

         if( ch == 10 ) sum++;
     }

     fclose( inf );

     inf = fopen( "i8f9.dat", "r");

     return sum;
 }



 void WorkersFilling( FILE *inf, workerT A[], int x )
 {
     bool flag = TRUE;
     int i = 0;
     int nscan;

     while(TRUE)
     {void FileCreation( FILE *ouf, workerT A[], int x )
         nscan = fscanf( inf, "%d %lf", &A[i].code, &A[i].income);
         i++;

         if( nscan == EOF ) break;
     }

     for( i = 0; i <= x; i++ )
     {
         A[i].new_income = A[i].income * ( 1 + (A[i].income / 5) );
     }
 }



 void FileCreation( FILE *ouf, workerT A[], int x )
 {
     int i;

     for(i = 0; i <= x; i++ )
     {
         fprintf( ouf, "%7d%13.1lf\n", A[i].code, A[i].new_income);
     }
 }
