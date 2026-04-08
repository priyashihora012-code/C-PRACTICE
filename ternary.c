// 5.3 Q=1

#include<stdio.h>
int main()
{
	int a, b, c;
	printf("enter value of the first number: ");
	scanf("%d",&a);
	
	printf("enter value of the second number: ");
	scanf("%d",&b);
	
	printf("enter value of the third number: ");
	scanf("%d",&c);
	
 (a < b)
	?(a < c ? printf("minimum value is:%d\n",a): printf("minimum value is:%d\n",c) )
	:(b < c? printf("minimum value is:%d\n",b): printf("minimum value is:%d\n",c) );
}

//enter value of the first number: 45
//enter value of the second number: 67
//enter value of the third number: 12
//minimum value is:12
