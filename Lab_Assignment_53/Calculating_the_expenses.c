#include<stdio.h>
#include<math.h>

int main()
 {
   double start, stop, distance, cost, totalExpense;
   
   printf("Enter the starting point : ");
   scanf("%lf", &start);
   printf("Entert the ending point : ");
   scanf("%lf", &stop);
   printf("Enter cost per km : ");
   scanf("%lf", &cost);
   
   distance = start - stop;
   totalExpense = distance*cost;
   
   printf("The total expense for your travel is %lf", totalExpense);
   return 0;
 }
