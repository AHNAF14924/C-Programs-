#include<stdio.h>
#define max_size 1000
int main()
{
    int ahnaf[max_size],i,j,n,nor,temp,k;
    printf("Enter size of the array;\n");
    scanf("%d",&n);
    printf("Enter elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ahnaf[i]);
    }
    printf("Enter number of turns:\n");
    scanf("%d",&nor);
    for(j=1;j<=nor;j++)
    {
        temp=ahnaf[n-1];
        for(i=n-1;i>=1;i--)
        {
            ahnaf[i]=ahnaf[i-1];
        }
        ahnaf[0]=temp;

    }
    printf("Enter elements after right rotation:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",ahnaf[i]);
    }


    for(k=1;k<=nor;k++)
    {
        temp=ahnaf[0];
        for(i=0;i<n-1;i++)
        {
            ahnaf[i]=ahnaf[i+1];
        }
        ahnaf[n-1]=temp;

    }
    printf("\nEnter elements after left rotation:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",ahnaf[i]);
    }
    return 0;
}
