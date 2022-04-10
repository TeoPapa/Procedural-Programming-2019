 #include <stdio.h>
 #include "simpio.h"
 #include "genlib.h"

 int MAX(int, int);

 int MIN(int, int);

 main()
 {
     int n1, n2,mx, mn;
     printf("Please give the first number:");
     n1 = GetInteger();

     printf("Please give the second number:");
     n2 = GetInteger();

     mx = MAX(n1, n2);

     mn = MIN(n1, n2);

     printf("The biggest number is: %d \n", mx);

     printf("The smallest number is: %d \n", mn);
 }

 int MAX( int x, int y)
 {
     if (x > y) return x;
     else return y;
 }

 int MIN( int x, int y)
 {
     if (x < y) return x;
     else return y;
 }
