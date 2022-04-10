 #include <stdio.h>
 #include "simpio.h"
 #include "genlib.h"

 int menu();

 double convert( int, double );

 main()
 {
     int ch;
     double mon, pos_mon;
     ch = menu();
     while (ch != 6)
     {
         printf("Dose poso xrhmatwn: ");
         mon = GetReal();
         pos_mon  = convert( ch, mon);
         printf( "H isotimia einai: %g \n \n", pos_mon);
         ch = menu();
     }
 }

 int menu()
 {
     int ans;
     printf(" 1. Metatroph se dollaria \n 2. Metatroph se lires \n 3. Metatroph se fraga Elbetias \n 4. Metatroph se dollaria Canada \n 5.Metatroph se gien \n 6. Exodos \n \n");
     ans = GetInteger();
     printf("\n");
     return ans;
 }

 double convert( int ch, double mon )
 {
     if (ch == 1)
     {
         return mon / 0.89;
     }
     else if ( ch == 2 )
     {
         return mon / 0.618;
     }
     else if ( ch == 3 )
     {
         return mon / 1.5465;
     }
     else if ( ch == 4 )
     {
         return mon / 1.3565;
     }
     else
     {
         return mon / 109.22;
     }
 }
