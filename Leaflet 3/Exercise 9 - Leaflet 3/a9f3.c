 #include <stdio.h>
 #include "simpio.h"
 #include "genlib.h"

 main()
  {
    int bathmos, pl, sum;
    double mo;

    printf("Dwse ton bathmo:");
    bathmos = GetInteger();

    pl = 0;
    sum = 0;
    while( bathmos != -1)
      {
          pl++;
          sum += bathmos;

          printf("Dwse ton bathmo:");
          bathmos = GetInteger();
      }
    mo = (double)sum/pl;

    printf("%d \n", pl);
    printf("%d \n", sum);
    printf("%g \n", mo);
  }
