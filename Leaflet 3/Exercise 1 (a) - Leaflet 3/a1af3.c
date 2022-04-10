 #include <stdio.h>
 #include "math.h"
 #include "simpio.h"
 #include "simpio.h"

 #define cars_start 80000
 #define cars_limit 160000
 #define growth 0.07

 main()
 {
    long cars, years;

    cars = cars_start;
    years = 0;

    while( cars <= cars_limit)
    {
        cars = ceil(cars + cars * growth);
        years++;
    }

    printf("%ld \n %ld", years, cars);
 }
