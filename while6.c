#include<stdio.h>
int main()
{
  int a;
	printf("enter values: ");
	scanf("%d",&a);
	
	int b;
	printf("enter values: ");
	scanf("%d",&b);
		
	while(a<=b){
		printf("%d\n",a*a);
		a = a+1;
	}
}

//enter values: 2
//enter values: 10
//4 
//9 
//16 
//25 
//36 
//49 
//64 
//81 
//100 
