 //a13f7

 #include <stdio.h>
 #include <string.h>
 #include "simpio.h"
 #include "genlib.h"

 #define biggest_word 173  //The characters in the biggest known word are 172

 void Words( char w1[], char w2[] );

 void Common_Characters( char w1[], char w2[], char comc[]);

 void Only_Once( char A[], char B[] );

 void Printing( char w1[], char w2[], char com[], char onc[] );

 int main()
 {
     char word1[biggest_word], word2[biggest_word], common_char[biggest_word], once[biggest_word];

     Words( word1, word2 );

     Common_Characters( word1, word2, common_char );

     Only_Once( common_char, once );

     Printing( word1, word2, common_char, once);

     return 0;

 }



 void Words( char w1[], char w2[] )
 {
     printf("Please insert two words to find the common characters.\nWord 1: ");
     gets( w1 );
     printf("Word 2: ");
     gets( w2 );
 }



 void Common_Characters( char w1[], char w2[], char comc[] )
 {
     int s1 = strlen( w1 );
     int s2 = strlen( w2 );
     int i = 0;
     int j = 0;

     while(w1[i] != '\0')
     {
         j = 0;
         while(w2[j] != '\0')
         {
             if( w1[i] == w2[j] )
             {
                 comc[i] = w1[i];
                 comc[i + 1] = '\0';
             }
             j++;
         }
         i++;
     }

 }



 void Only_Once( char A[], char B[] )
 {
     int i = 0;
     int j = 0;

     while( A[i] != '\0' )
     {
         if( A[i] == A[i+1] )
         {
             i++;
         }
         else
         {
             B[j] = A[i];
             j++;
             i++;
         }
     }
 }



 void Printing( char w1[], char w2[], char com[], char onc[] )
 {
     printf("Common characters of %s in %s:%s \n\n----\n", w1, w2, com);
     printf("Set of (unique) Common Characters of %s and %s:%s", w1, w2, onc);
     printf("\n\n----");
 }
