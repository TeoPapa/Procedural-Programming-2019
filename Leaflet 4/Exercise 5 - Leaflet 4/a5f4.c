 #include <stdio.h>
 #include "simpio.h"
 #include "genlib.h"

 int cube(int);

 int sum_cube(int);

 bool IsArmstrong(int);

 main()
 {
    int i;

    for(i=0; i<=999; i++)
    {
        if( IsArmstrong(i) )
        {
            printf("To %d einai arithmos Armstrong \n", i);
        }
    }
 }

 int cube(int i)
 {
     return i * i * i;
 }



 int sum_cube(int num)
 {
     int sum;

     if( num < 10 )
     {
         sum = cube(num);
     }
     else if(num < 100)
     {
         sum = cube(num % 10) + cube(num / 10);
     }
     else
     {
         sum = cube(num / 100) + cube((num % 100) / 10) + cube((num % 100) % 10);
     }

     return sum;
 }



 bool IsArmstrong(int n)
 {
    return ( sum_cube(n) == n);
 }
