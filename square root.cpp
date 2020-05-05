/* square root of a number without library function
*/
#include<stdio.h>
int main()
{
	float num,sqrt,temp;

	do{
		printf("Enter number.\n");
		scanf("%f",&num);
		sqrt=num/2;
		temp=0;
		while(sqrt!=temp)
		{
			temp=sqrt;
			sqrt=(num/temp+temp)/2;
		}
		printf("Square root of %.f = %f\n",num,sqrt);
	}while(1);
	return 0;
}
