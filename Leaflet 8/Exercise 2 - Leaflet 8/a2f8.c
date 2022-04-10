 //a2f8

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include "simpio.h"
 #include "genlib.h"

 typedef struct
 {
     int appartment;
     char name[20];
     int app_cubes;
     int kalorifer;
     double thermansh_am;
     double koinoxrhsta_am;
     double total;
 }rentT;


 int tm;

 int fetes_k;

 double pos_therm;

 double pos_koin;

 double total_total;



 int PlithosEnoik();

 void Mhniaia( double *x, double *y);

 rentT GetEnoikiastis( int *x, int *y);

void AnalytikhKatastashPlhrwmhs( int k, int l, double x, double y, rentT A[], int x1 );


 void printing( rentT Array[], int x, int y, int k );


 int main()
 {
     rentT *enoikiastis, x;
     int plithos, i, full_cubes, full_piecies;
     double thermansh, koinoxrhsta;

     full_cubes = full_piecies = 0;

     plithos = PlithosEnoik();

     enoikiastis = (rentT *) calloc( plithos, sizeof( rentT ));

     Mhniaia( &thermansh, &koinoxrhsta );

     for( i = 0; i < plithos; i++ )
     {
         printf("Dwse ta dedomena tou %d enoikiasth: \n", i + 1);
         enoikiastis[i] = GetEnoikiastis( &full_cubes, &full_piecies );
         enoikiastis[i].appartment = i;
         printf("\n");
     }

     for( i = 0; i < plithos; i++ )
     {
         AnalytikhKatastashPlhrwmhs( full_cubes, full_piecies, thermansh, koinoxrhsta, enoikiastis, i );
     }

     printing( enoikiastis, plithos, full_cubes, full_piecies );

     free( enoikiastis );

     return 0;
 }



 int PlithosEnoik()
 {
     printf("Dwse to plithos twn enoikwn: ");
     return GetInteger();
 }



 void Mhniaia( double *x, double *y)
 {
     printf("Dwse to poso thermanshs: ");
     *x = GetReal();

     printf("Dwse to poso koinoxrhstwn: ");
     *y = GetReal();
     printf("\n");
 }



 rentT GetEnoikiastis( int *x, int *y )
 {
     rentT k;

     k.appartment = 0;

     printf(" Dwse to onomateponymo: ");
     gets( k.name );

     printf(" Dwse ta tetragwnika metra tou diamerismatos: ");
     k.app_cubes = GetInteger();
     *x += k.app_cubes;

     printf(" Dwse to plhthos twn fetwn kalorifer: ");
     k.kalorifer = GetInteger();
     *y += k.kalorifer;

     return k;
 }



 void AnalytikhKatastashPlhrwmhs( int k, int l, double x, double y, rentT A[], int x1 )
 {
     A[x1].thermansh_am = ( x/l ) * A[x1].kalorifer ;

     A[x1].koinoxrhsta_am = (y/k) * (A[x1].app_cubes);

     A[x1].total = A[x1].thermansh_am + (A[x1].koinoxrhsta_am);

     pos_therm += A[x1].thermansh_am;

     pos_koin += A[x1].koinoxrhsta_am;

     total_total += A[x1].total;
 }



 void printing( rentT Array[], int x, int y, int k )
 {
     int i;

     printf("A/A              ONOMATEPWNYMO T.M. FETES   POSO THERM.  POSO KOIN.   SYNOLO\n");
     printf("-----------------------------------------------------------------------------\n");
     for( i = 0; i < x; i++ )
     {
         printf("%3d%26s%5d%6d%12g%12g%12g\n", Array[i].appartment + 1, Array[i].name, Array[i].app_cubes, Array[i].kalorifer, Array[i].thermansh_am, Array[i].koinoxrhsta_am, Array[i].total);
     }
     printf("-------------------------------------------------------------------------------\n");
     printf("SYNOLA:                      %5d%6d%12g%12g%12g\n", y, k, pos_therm, pos_koin, total_total);
 }
