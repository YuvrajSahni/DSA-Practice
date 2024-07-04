#include <stdio.h>

int func(int n)
{
    int sum=0;
    for(int i=0; i<=n; i++)
    {
        sum+=i;
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",func(n));
    return 0;
}

