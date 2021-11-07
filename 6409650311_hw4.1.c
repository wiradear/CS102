#include <stdio.h>
//6409650311
//WIRAKARN PONPRASERD
/*compute sum of number in each arrey*/

int computeSum(int num[],int size);

main()
{
    /*int num1[5]={32,24,5,9,16};
    int num2[8]={9,5,7,14,11,8,3,1};
    int num3[3]={45,25,14};
    printf("sum = %d",computeSum(num1,5));*/

    int size,i;
    printf("Enter size:");
    scanf("%d",&size);
    printf("Enter num:");
    int num[size];
    for (i=0; i<size; i++)
    {
        scanf(" %d",&num[i]);
    }
    printf("sum = %d\n",computeSum(num,size));
    return 0;

}

int computeSum(int num[],int size)
{
    int sum=0,i;
    for(i=0; i<size; i++)
    {
        sum = sum+num[i];
    }
    return sum;

}

