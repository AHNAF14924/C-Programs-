#include<stdio.h>
int main()
{
	struct dist{
		int feet;
		float inch;
	}dist1,dist2,sum;
	printf("Enter feet:\n");
	scanf("%d",&dist1.feet);
	scanf("%d",&dist2.feet);
	printf("Enter inches:\n");
	scanf("%f",&dist1.inch);
	scanf("%f",&dist2.inch);
	sum.feet=dist1.feet+dist2.feet;
	sum.inch=dist1.inch+dist2.inch;
	while(sum.inch>=12){
		++sum.feet;
		sum.inch=sum.inch-12;
	}
	printf("Total Distance= %d\'-%.2f\"\n",sum.feet,sum.inch);
	return 0;
	
}
