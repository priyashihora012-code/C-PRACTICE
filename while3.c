#include<stdio.h>
int main()
{
	int a;
	printf("enter value(-): ");
	scanf("%d", &a);
	
	int b = -a;

	while(a>=b){
		printf("%d, value\n",b);
		b= b +1;
	}
}
//enter value(-): 3
//-3, value
//-2, value
//-1, value
//0, value
//1, value
//2, value
//3, value
