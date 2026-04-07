#include<stdio.h>

int main()
{
    int i, n;

    printf("Enter odd value: ");
    scanf("%d", &i);

    printf("Enter ending value: ");
    scanf("%d", &n);

    while(i <= n)
    {
        printf("%d ", i);
        i = i + 2;   // jump by 2
    }
}

//Enter starting value: 1
//Enter ending value: 20
//1 3 5 7 9 11 13 15 17 19
