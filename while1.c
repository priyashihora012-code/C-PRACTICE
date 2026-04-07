#include<stdio.h>
int main()
{
	int i;
	printf("enter value: ");
	scanf("%d",&i);
	
	int p;
	printf("enter value: ");
	scanf("%d",&p);
	
	
	while(i<=p){
		printf("%d hello, students\n",i);
		i = i+1;
	}
}

/*  output:
enter value: 5
enter value: 10
5 hello, students
6 hello, students
7 hello, students
8 hello, students
9 hello, students
10 hello, students
*/
