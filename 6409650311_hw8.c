#include <stdio.h>
//6409650311
//WIRAKARN PONPRASERD

main()
{
    float temperatures[3][7]={{34, 32, 35, 29, 30, 33, 32},
                              {33, 38, 34, 36, 33, 32, 31},
                              {34, 35, 30, 28, 31, 29, 33}};
    int week,day;
    printf("Enter week (1-3):");
    scanf("%d",&week);
    printf("Enter day (1-7):");
    scanf("%d",&day);
    printf("Temperature of week %d on day %d is %.2f\n",week,day,temperatures[week-1][day-1]);

    return 0;
}
