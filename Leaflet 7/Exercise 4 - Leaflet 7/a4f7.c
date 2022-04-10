 //a4f7

 #include <stdio.h>
 #include <string.h>
 #include "simpio.h"
 #include "genlib.h"


 void NumberCreation( char A[], int x, int y );

 int main()
 {
     int number, size_n;
     char string_numb[100];

     printf("Please give an integer: ");
     number = GetInteger();

     printf("Please give the amount of digits that you want: ");
     size_n = GetInteger();

     NumberCreation( string_numb, number, size_n );

     printf("The number is: %s", string_numb);

     return 0;
 }



 void NumberCreation( char A[], int x, int y )
 {
     int i, k, j;
     char num[100], temp[100];

     for( i = 0; i < y; i++ )
     {
         temp[i] = '0';
     }

     A[i] = '\0';

     itoa( x, num, 10 );

     strcat( temp, num );

     k = strlen( num );

     j = 0;

     for( i = k; i < k + y; i++ )
     {
         A[j] = temp[i];
         j++;
     }
 }
