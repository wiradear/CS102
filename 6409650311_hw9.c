#include <stdio.h>
//6409650311
//WIRAKARN PONPRASERD

main()
{
    int x[2][2]={{1,2},{3,4}};
    int y[2][2]={{5,6},{7,8}};
    //int result;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%2d\t",x[i][j]+y[i][j]);
        }
        printf("\n");
    }
    return 0;
}
