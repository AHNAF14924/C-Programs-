#include<stdio.h>
int main()
{
    int f=0,s=1,n,count=0,fibo;
    printf("\nEnter range:\n");
    scanf("%d",&n);
    while(count<n)
    {
        if(count<=1)
            fibo=count;
        else
        {
            fibo=f+s;
            f=s;
            s=fibo;
        }
        printf("%d ",fibo);
        count++;
    }
    return 0;
}
