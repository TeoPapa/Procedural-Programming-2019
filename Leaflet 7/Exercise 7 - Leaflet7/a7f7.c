 //a7f7

 #include <stdio.h>
 #include <string.h>
 #include "simpio.h"
 #include "genlib.h"

 int ScrabbleScore( char A[21] );

 int main()
 {
     char word[21];
     int score;

     printf("Please give the word: ");
     gets( word );

     score = ScrabbleScore( word );

     printf("The score for the word \" %s \" is: %d", word, score);

     return 0;
 }



 int ScrabbleScore( char A[21] )
 {
     int i;
     int x = strlen( A );
     int sum = 0;

     for( i = 0; i <= x; i++ )
     {
         if( A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'L' || A[i] == 'N' || A[i] == 'O' || A[i] == 'R' || A[i] == 'S' || A[i] == 'T' || A[i] == 'U')
                sum ++;

          if( A[i] == 'D' || A[i] == 'G' )
                sum += 2;

          if( A[i] == 'B' || A[i] == 'C' || A[i] == 'M' || A[i] == 'P')
                sum += 3;

          if( A[i] == 'F' || A[i] == 'H' || A[i] == 'V' || A[i] == 'W' || A[i] == 'Y')
                 sum += 4;

          if( A[i] == 'K' )
                 sum += 5;

          if( A[i] == 'J' || A[i] == 'X')
                 sum += 8;

           if( A[i] == 'Q' || A[i] == 'Z')
                 sum += 10;
        }

     return sum;
 }
