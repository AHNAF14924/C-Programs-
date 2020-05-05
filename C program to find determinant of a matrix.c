#include<stdio.h>
#define size 3
int main()
{
    int ahnaf[size][size],row,col,det;
    int a,b,c,d,e,f,g,h,i;
    printf("Enter elements of array:\n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&ahnaf[row][col]);
        }
    }
    a=ahnaf[0][0];
    b=ahnaf[0][1];
    c=ahnaf[0][2];
    d=ahnaf[1][0];
    e=ahnaf[1][1];
    f=ahnaf[1][2];
    g=ahnaf[2][0];
    h=ahnaf[2][1];
    i=ahnaf[2][2];
    det=((a*(e*i-f*h))-(b*(d*i-f*g))+(c*(d*h-e*g)));
    printf("Determinant of a = %d.\n",det);
    return 0;

}
