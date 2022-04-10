 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include "simpio.h"
 #include "genlib.h"

 typedef struct
 {
     char name[30];
     int apousies;
 }studentT;


 void readInput( FILE *infile, studentT Array[] int *pApousies, int *pStudents );

 void writeOutput ( FILE* outfile, int size, studentT students[], int total);

 int main()
 {
     FILE* infile;
     FILE* outfile;
     studentT students[100];

     infile = fopen("i2f9.dat", "r");

     if (infile == NULL)
     {
         printf("Cannot open input file i2f9.dat ");
         exit(1);
     }
     outfile = fopen("o2f9.dat", "w");




     return 0;
 }



 void readInput( FILE *infile, studentT Array[], int *pApousies, int *pStudents)
 {
     int nscan, apousies, studcount, apouscount, line;
     char name[30], comments[68], termch;

     *pApousies = 0;
     *pStudents = 0;

     line = 0;

     while (TRUE)
     {
         nscan = fscanf(infile, "%30[^,], %d, %68[^\n]%c", name, &apousies, comments, &termch);

         if( nscan == EOF ) break;

         line++;
         if( nscan != 4 || termch != '\n')
         {
             printf("Error in line %d. Program termination\n", line);
             exit(1);
         }

         if (apousies > 100 )
         {
             strcpy(students[*pApousies].name, name);
             students[*pApousies].apousies = apousies;
             (*pApousies)++;
         }
     }
 }



 void writeOutput ( FILE* outfile, int size, studentT students[], int total)
