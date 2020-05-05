#include<stdio.h>
#define ROW 3
#define COL 3
int main()
{
    int a[ROW][COL],row,col,temp,size;
    printf("Enter elements of the a array:\n");
    for(row=0;row<ROW;row++)
    {
        for(col=0;col<COL;col++)
        {
            scanf("%d",&a[row][col]);
        }
    }
    printf("Elements of a array:\n");
    for(row=0;row<ROW;row++)
    {
        for(col=0;col<COL;col++)
        {
            printf("%d ",a[row][col]);
        }
        printf("\n");
    }
    size=(ROW>COL)?ROW:COL;
    for(row=0;row<size;row++)
    {
        col=row;
        temp=a[row][col];
        a[row][col]=a[row][(size-col)-1];
        a[row][(size-col)-1]=temp;
    }
    printf("\nElements after interchange:\n");
    for(row=0;row<ROW;row++)
    {
        for(col=0;col<COL;col++)
        {
            printf("%d ",a[row][col]);
        }
        printf("\n");
    }
    return 0;
}
