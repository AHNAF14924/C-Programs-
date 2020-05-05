#include<stdio.h>
#define size 3
int main()
{
    int a[size][size],row,col,sum=0;
    printf("Enter elements of a array:\n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&a[row][col]);
        }
    }
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            if(col>row)
            {
                sum+=a[row][col];
            }
        }
    }
    printf("\n%d\n",sum);
    return 0;
}
