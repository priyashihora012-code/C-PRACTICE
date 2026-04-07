#include<stdio.h>
int main()
{
	int a;
	printf("start even num: ");
	scanf("%d",&a);
	
	int b;
	printf("end even num: ");
	scanf("%d",&b);
	
	while(a<=b){
		if(a % 2 == 0){
			 printf("%d ", a);
		}
		 a = a + 1;
	}
}

//output:
//start even num: 70
//end even num: 80
//70 72 74 76 78 80
	
