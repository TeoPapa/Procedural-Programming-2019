 #include <stdio.h>
 #include "simpio.h"
 #include "genlib.h"

 #define siz 50


 int IntegerReading(); // Function to read an integer

 void ArrayReading( long A[siz], int N ); // Function to read an array (type long)

 void ArrayPrinting( long A[siz], int N); // Function to print the array

 int FindMaxPos( int size, long a[], int index[]); // Function to calculate the max, printing it and returning how many times it showed up


 main()
 {
     int N, ind[siz], plithos, i; //The array elements, the array with the indexes of the max elements, the times max showed up
     long Array[siz]; //The array

     N = IntegerReading();

     ArrayReading( Array, N);

     ArrayPrinting( Array, N);

     plithos = FindMaxPos( N, Array, ind);

     printf("Plithos maximum %d \n", plithos);
     printf("Positions of maximum ");

     for( i = 0; i < plithos; i++)
     {
         printf("%d ", ind[i]);
     }
 }



 int IntegerReading()
 {
     printf("Dwse to plhthos twn stoixeiwn: ");
     return GetInteger();
 }



 void ArrayReading( long A[siz], int N )
 {
     int i;

     for( i = 0; i < N; i++)
     {
         A[i] = GetLong();
     }
 }



 void ArrayPrinting( long A[siz], int N)
 {
     int i;

     for( i = 0; i < N; i++)
        printf("%ld ", A[i]);

     printf("\n");
 }



 int FindMaxPos( int size, long a[], int index[])
 {
     int s, i;
     long max;

     s = 1;
     index[0] = 0;
     max = a[0];

     for( i = 1; i < size; i++)
     {
         if( a[i] > max)
         {
             s = 1;
             max = a[i];
             index[s - 1] = i;
         }
         else if( a[i] == max )
         {
             s++;
             index[s - 1] = i;
         }
     }

     printf("maximum %ld \n", max);
     return s;
 }
