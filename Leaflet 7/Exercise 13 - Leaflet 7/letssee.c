 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 #include "simpio.h"
 #include "genlib.h"

 main()
 {
     int x, i;
     char y[10];



     x = GetInteger();
     itoa( x, y, 10 );


     printf("%s", y);
 }
