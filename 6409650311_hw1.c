#include <stdio.h>
//6409650311
//WIRAKARN PONPRASERD
//find max min form the given arrey
main()
{
    float temperatures[7]={34,32,35,29,30,33,32};
    int i,j,max,min;

    min=temperatures[0];
    for(i=0; i<7; i++)
    {

        if(min>temperatures[i])
            min=temperatures[i];

        else if(max<temperatures[i])
            max=temperatures[i];
        //else{};
    }
    printf("Minimum is %d\nMaximum is %d\n",min,max);
    return 0;
}

