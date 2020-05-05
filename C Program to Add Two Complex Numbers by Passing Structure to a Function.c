#include<stdio.h>
typedef struct complex{
	float real,img;
}com;
com add(com n1,com n2);
int main(){
	com n1,n2,result;
	printf("Enter 1st Data:\n");
	printf("Enter the real and imagenary part:\n");
	scanf("%f%f",&n1.real,&n1.img);
	printf("Enter 2nd data:\n");
	printf("ENter the real and imaginary number:\n");
	scanf("%f%f",&n2.real,&n2.img);
	result=add(n1,n2);
	printf("Result = %.1f+%.1fi\n",result.real,result.img);
	return 0;
}
com add(com n1,com n2){
	com temp;
	temp.real=n1.real+n2.real;
	temp.img=n1.img+n2.img;
	return temp;
}