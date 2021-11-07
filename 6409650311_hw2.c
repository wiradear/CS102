#include <stdio.h>
//6409650311
//WIRAKARN PONPRASERD
//print star from the given array

main()
{   int i,j,n[5]={3,4,1,3,5};
    //char star;
    //star = '*';
    printf("index\tvalue\n");
    for(i=0; i<5; i++)
    {
        printf("%d\t%d\t",i,n[i]);

        for(j=0; j<n[i]; j++)
            printf("n");
            //printf("%c",star);
            printf("\n");
    }

    return 0;
}
