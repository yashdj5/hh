#include<stdio.h>
main()
{
    int n,arr[20];
    printf("\n\n\tEnter the size of the array :  ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        printf("\n\n\tEnter arr[%d] :  ",i);
        scanf("%d",&arr[i]);


    }

    int max=arr[1];
    for(int i=1;i<=n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }

    printf("\n\n\tThe maximum number in the array is %d ",max);
}
