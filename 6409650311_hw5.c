#include <stdio.h>
//6409650311
//WIRAKARN PONPRASERD
/*input realnumber and size of arrey and return index of maximum number*/
int findMaximum(double arr[],int size);

int main()
{
    int i,index;
    printf("Enter 10 number:");
    double arr[10];
    for(i=0; i<10; i++)
    {
        scanf(" %lf",&arr[i]);
    }
    index=findMaximum(arr,10);
    printf("Maximum value is at index %d",index);
    return 0;
}

int findMaximum(double arr[],int size)
{
    double max=arr[0];
    int index;
    for(int j=0; j<size; j++)
    {
        if(max<arr[j])
        {
            //printf("%d %lf %lf\n",j,max,arr[j]);
            max=arr[j];
            index=j;
        }
    }
    return index;
}
