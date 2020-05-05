#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,i,n,sum=0;
	float avg;
	printf("Enter total numbers:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("\nEnter number[%d]",i+1);
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++){
		sum+=*(ptr+i);
	}
	avg=(float)sum/n;
	printf("\nAverage=%.2f",avg);
	free(ptr);
	return 0;
}
