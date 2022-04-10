 //a5f8

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include "simpio.h"
 #include "genlib.h"

 typedef struct
 {
     int code;
     char surname[16];
     long sales_ammount;
     int city;
 }smT;


 smT GetSales();

 void TotalSales( long Array[], smT A[], int x);

 void Printing( long A[] );

 int main()
 {
     int count, i;
     long sales[5];
     smT *salesman;

     printf("Dwse to plhthos twn pwlhtwn: ");
     count = GetInteger();

     salesman = (smT *)calloc( count, sizeof( smT));

     for( i = 0; i < count; i++ )
     {
         salesman[i] = GetSales();
         salesman[i].code = i;
     }

     TotalSales( sales, salesman, count );

     Printing( sales );

     free( salesman );

     return 0;
 }



 smT GetSales()
 {
     smT x;

     x.code = 0;

     printf("Dwse to epwnymo: ");
     gets( x.surname );

     printf("Dwse to poso pwlhsewn: ");
     x.sales_ammount = GetReal();

     printf("Dwse thn perioxh: ");
     x.city = GetInteger();

     return x;
 }


 void TotalSales( long Array[], smT A[], int x )
 {
     int i;

     for(i = 0; i < 5; i++)
        Array[i] = 0;

     for( i = 0; i < x; i++ )
     {
         if( A[i].city == 1 )
            Array[0] += A[i].sales_ammount;
         else if( A[i].city == 2 )
            Array[1] += A[i].sales_ammount;
         else if( A[i].city == 3 )
            Array[2] += A[i].sales_ammount;
         else if( A[i].city == 4 )
            Array[3] += A[i].sales_ammount;
         else
            Array[4] += A[i].sales_ammount;
     }

     Array[4] = Array[1] + Array[2] + Array[3] + Array[0];
 }



 void Printing( long A[] )
 {
     int i;

     printf("PERIOXH     SYN.PWLHSEWN\n");
     printf("------------------------\n");
     printf("Thes/niki  %13ld\nAthens     %13ld\nVolos      %13ld\nHrakleio   %13ld\n", A[0], A[1], A[2], A[3] );
     printf("------------------------\n");
     printf("SYNOLO:%17ld", A[4] );
 }
