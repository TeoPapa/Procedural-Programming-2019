 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 #include "simpio.h"
 #include "genlib.h"

 typedef struct
 {
     int code;
     char name[29];
     int points;
 }basketT;

 int total_points = 0;
 int p10 = 0;

 void readFromFile( FILE *inf, basketT A[], int *x );

 void writeToFile( FILE *ouf, basketT A[], int x );

 int main()
 {
     basketT Players[100];
     int spl = 0;
     FILE *infile;
     FILE *outfile;

     infile = fopen("i11f9.dat", "r" );

     if( infile == '\0' ) Error("Can't open i11f9.dat");

     readFromFile( infile, Players, &spl);

     outfile = fopen( "baso11f9.dat", "w" );

     writeToFile( outfile, Players, spl );

     fclose( infile );

     fclose( outfile );

     return 0;
 }



 void readFromFile( FILE *inf, basketT A[], int *x )
 {
     int nscan;

     while(TRUE)
     {
         nscan = fscanf( inf, "%d,%[^,],%d", &A[(*x)].code, &A[(*x)].name, &A[(*x)].points);

         if(nscan == EOF )
         {
             (*x)--;
             break;
         }

         total_points += A[(*x)].points;

         if(A[(*x)].points >= 10)
            p10++;
         (*x)++;
     }

 }



 void writeToFile( FILE *ouf, basketT A[], int x )
 {
     int i = 0;

     fprintf(ouf, "ONOMATEPWNYMO                    PONTOI\n");

     for(i = 0; i <= 39; i++) fprintf(ouf, "-");

     fprintf(ouf, "\n");

     for(i = 0; i < x; i++ )
         fprintf(ouf, "%-28s%11d\n", A[i].name, A[i].points);

     for(i = 0; i <= 39; i++ ) fprintf(ouf, "-");

     fprintf(ouf, "\n");

     fprintf(ouf, "%-28s%11d\n", "SYNOLO PONTWN", total_points );

     fprintf(ouf, "%-28s%11ld\n", "SYNOLO PAIKTVN >= 10", p10 );
 }
