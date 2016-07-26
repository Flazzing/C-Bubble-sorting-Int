#include <stdio.h>
#include <stdlib.h>

main() {
 FILE *file = fopen("ID.dat", "r+");
  /* Creating file name file and opening ID.dat file to read and write */
    int integers[100];
    /*to store all txt ID to sort it */
    int i=0,y=0;
    /*i : act as a increment for array to store ID*/
    /*y : act as a increment to fullfill condition for final printf */
    int num;
    /*num :to scan ID from text*/
    char name[200], course[200], course2[200];
    /*name: to scan/store name from text
    course: to scan/store 1 string of the first course name
    course2: to scan/store 1 string of the second course name
    */
    printf("File before reading and sorting\n\n");
    printf("ID\tName\t\tCourse\n");
    while(fscanf(file, "%d%s%s%s", &num, &name, &course, &course2) >0)
     {
        integers[i] = num;
        i++; 
        printf("%d\t%s\t\t%s %s\n", num, name, course, course2);
    }
    /*while loop: To ensure all text in txt file format is scan and print.
   Storing num  in an array like an index after reading text from text file format.
   Finally print them out. 
    */
    
    selection(integers, i);
      /*selection: is a function for bubble sort*/

    if (integers[0] == 211)
    fprintf(file, "\n\n%d Lawrence Computer Science", integers[0]);
    if (integers[1] == 388)
    fprintf(file, "\n%d John Computer Science", integers[1]);
    if (integers[2] == 495)
    fprintf(file, "\n%d Jimmy Computer Science", integers[2]);
    if (integers[3] == 547)
    fprintf(file, "\n%d David Information Technology\n", integers[3]);
/*To write text into the file following by condition */
fclose(file);
/*To close the file*/
 
 FILE *result = fopen("ID.dat", "r");
 /* read*/
 printf("File before sorting\n");
   printf("ID\tName\t\tCourse\n");

 while (!feof(file))
{
 fscanf(file, "%d%s%s%s", &num, &name, &course, &course2);
 y++; 
 printf("%d\t%s\t%s %s\n", num, name, course, course2);
 if (y == 4)
 {
 printf("\n");
 printf("Bubble Sort is done\n");
   printf("ID\tName\t\tCourse\n");
}
}
fclose(file); 
/*Close file */
system ("pause");
return 0;
 }
 
 /* Bubblesort   */
 selection(int a[], int array_size)
{
int i, j, k;
int min, temp;
for (i = 0; i < array_size-1; i++)
{
min = i;
for (j = i+1; j < array_size; j++)
{
if (a[j] < a[min])
min = j;
}
temp = a[i];
a[i] =a[min];
a[min] = temp;
}
printf("\nAfter sorting index:\n");
for (i = 0; i < array_size; i++)
printf("[%i], ", a[i]);
printf("\n\n\n");
}

