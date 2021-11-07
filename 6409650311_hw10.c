#include <stdio.h>
//6409650311
//WIRAKARN PONPRASERD

main()
{
    float temperatures[3][7]={{34, 32, 35, 29, 30, 33, 32},
                              {33, 38, 34, 36, 33, 32, 31},
                              {34, 35, 30, 28, 31, 29, 33}};

   for(int i=1; i<=3; i++)
   {
       printf("week: %d\n",i);
       for(int j=1; j<=7; j++)
       {
          printf("\tDay: %d Temperature: %.2f\n",j,temperatures[i-1][j-1]);
       }
       printf("----------------------------------\n");
   }
   return 0;

}
