#include<stdio.h>
int main()
{
	int a, b;
	printf("enter value: ");
	scanf("%d",&a);
	
	printf("enter value: ");
	scanf("%d",&b);
	
	while(a>=b){
		printf("%d,hello\n",a);
		a = a-1;
	}
	
}

/*  output:
enter value: 10
enter value: 3
10,hello
9,hello
8,hello
7,hello
6,hello
5,hello
4,hello
3,hello
*/
