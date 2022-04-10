 #include <stdio.h>
 #include "math.h"
 #include "simpio.h"
 #include "simpio.h"

 main()
 {
    long cars, years, cars_start, cars_limit;
    double growth;

    printf("Dwse ton arxiko arithmo autokinhtwn:");
    cars_start = GetLong();

    printf("Dwse ton ethsio arithmo ayxhshs:");
    growth = GetReal();

    printf("Dwse to orio:");
    cars_limit = GetLong();

    cars = cars_start;
    years = 0;

    while( cars <= cars_limit)
    {
        cars = ceil(cars + cars * growth);
        years++;
    }

    printf("%d \n %d", years, cars);
 }
