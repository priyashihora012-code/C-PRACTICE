// 1 4 12 32....

#include<stdio.h>
int main()
{
	int a=1; 
	int b=2;
    int c=1;
    int i;
	
	for(i=0; i<6; i++)
	{
		printf("%d ",c);
		c=(c*2)+b;
		b=b*2;
		
		}
}

//  1 4 12 32 80 192

