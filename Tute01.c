/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark_1,mark_2;
  float total, avg;
  
  printf("Input marks of subject 1 :  ");
  scanf("%d",&mark_1);

  printf("Input marks of subject 2 :  ");
  scanf("%d",&mark_2);

  total = mark_1+mark_2;
  avg = total/2;

  printf("Average of two subject : %.2f",avg);
  
  return 0;
}

