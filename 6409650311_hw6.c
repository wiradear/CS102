#include <stdio.h>
//6409650311
//WIRAKARN PONPRASERD
/*input number and size then, take first num instead last number*/
void retateArrey(int arr[], int size);
int arr[];

main()
{
    int size,result,i;
    printf("Enter N: ");//size
    scanf("%d\n",&size);
    arr[size];
    for(i=0; i<size; i++ )
    {
        scanf(" %d",&arr[i]);
    }
    retateArrey(arr,size);

    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;

}

void retateArrey(int arr[], int size)
{
    int i,tmp;
    tmp=arr[0];
    for(i=1; i<size; i++)
        arr[i-1]=arr[i];
    arr[size-1]=tmp;

}
