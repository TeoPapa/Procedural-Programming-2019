 #include <stdio.h>
 #include <string.h>
 #include "simpio.h"
 #include "genlib.h"

 int main()
 {
     int x;
     char y;

     x = 5;

     y = (char)x ;

     printf("%c", y);
     return 0;
 }

 main()
 {
     if( x < 10)
     {
         y[k - 1] = x;
     }
     else if( x < 100 )
     {
         y[k - 2] = x / 10;
         y[k - 1] = x % 10;
     }
    else if( x < 1000 )
    {
        y[k - 3] = x / 100;
        y[k - 2] = (x % 100) / 10;
        y[k - 1] = ( x % 100) % 10;
    }
    else if( x < 10000 )
    {
        y[k - 4] = x / 1000;
        y[k - 3] = (x % 1000) / 100;
        y[k - 2] = ((x % 1000) % 100) / 10;
        y[k - 1] = ((x % 1000) % 100) % 10;
    }
    else
    {
        y[k - 5] = x / 10000;
        y[k - 4] = (x % 10000) / 1000;
        y[k - 3] = ((x % 10000) % 1000) / 100;
        y[k - 2] = (((x % 10000) % 1000) % 100) / 10;
        y[k - 1] = (((x % 10000) % 1000) % 100) % 10;
    }
 }
