 #include <stdio.h>
 #include "simpio.h"
 #include "genlib.h"

 main()
  {
    int num, i;

    printf("Dwse arithmo:");
    num = GetInteger();

    printf("H fthinousa akolouthia einai:");
    for(i=num; i >= 0; i--)
    {
        printf(" %d", i);
    }
  }
