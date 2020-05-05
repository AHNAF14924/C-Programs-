#include<stdio.h>
#define size 3
int main()
{
    int a[size][size],row,col,identity=1;
    printf("Enter elements of array:\n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&a[row][col]);
        }
    }
    if(row==col&&a[row][col]!=1)
    {
        identity=0;
    }
    else if(row!=col&&a[row][col]!=0)
    {
        identity=0;
    }
    if(identity==1)
    {
        printf("This matrix is identity matrix.\n");
    }
    else
        printf("This matrix is not identity matrix.\n");


    return 0;
}
