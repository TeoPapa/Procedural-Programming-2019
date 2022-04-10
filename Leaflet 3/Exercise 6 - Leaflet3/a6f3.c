#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

main()
 {
    int N, n1, n2, i, k;

    printf("Dwse ton arithmo twn protwn orwn ths akolouthias:");
    N = GetInteger();

    n1 = 0;
    n2 = 1;

    for( i = 0; i < N; i++){
        printf("%d \n", n1);
        k = n1;
        n1 += n2;
        n2 = k;
    }
 }
