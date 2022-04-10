 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 #include "simpio.h"
 #include "genlib.h"


 void OpenClose( FILE *inf );

 int Lines( FILE *inf );

 int Words( FILE *inf, int *hc );


 int main()
 {
     FILE *infile;
     int hl, hw;
     int hc = 0;

     infile = fopen("i5f9.dat", "r");

     if(infile == '\0') Error("Can't open i5f9.dat");

     hl = Lines( infile );

     OpenClose( infile );

     hw = Words( infile, &hc );

     printf("Lines: %d \nWords: %d \nCharacters: %d", hl, hw, hc );

     fclose(infile);

     return 0;
 }



 int Lines( FILE *inf)
 {
     int sum = 0;
     char ch;
     while(TRUE)
     {
         ch = getc(inf);

         if( ch == EOF ) break;

         if( ch == 10 ) sum++;
     }

     return sum;
 }



 int Words( FILE *inf, int *hc )
 {
     int sum = 0;
     char ch;
     bool flag = TRUE;

     while(TRUE)
     {
         ch = getc(inf);

         if( ch == EOF ) break;

         if( (ch != 10 && ch != ' ') && flag )
         {
             (*hc)++;
             sum++;
             flag = FALSE;
         }
         else if( ch == 10 || ch == ' ')
         {
            flag = TRUE;
            (*hc)++;
         }
         else
            (*hc)++;
      }

      return sum;
 }



 void OpenClose( FILE *inf )
 {
     fclose( inf );
     inf = fopen( "i5f9.dat", "r" );
 }
