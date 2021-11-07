#include <stdio.h>
//6409650311
//WIRAKARN PONPRASERD
/*input 10 number and then, show the number that greater
than average*/

main()
{
    int n[10];//input
    int i,j,k;
    int average;
    int sum=0;

    printf("Enter 10 number:");
    for(i=0; i<10; i++)
    {
        scanf(" %d",&n[i]);
    }

    for(j=0; j<10; j++)
    {
        sum+=n[j];
    }
    average=sum/10;

    if(n[1]==n[2]==n[3]==n[4]==n[5]==n[6]==n[7]==n[8]==n[9]==n[0])
    {
        printf("There is no number greater than average");
    }

    else
    {
        printf("numbers that > average is");
        for(k=0; k<10; k++)
        {
            if(n[k]>average)
            printf(" %d",n[k]);
        }

    }

    printf("\n");
    return 0;
}
