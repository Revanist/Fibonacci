#include <stdio.h>
#include <stdlib.h>


int fibonacci (int x)
{
    if(x == 1)
    {
        return 1;
    }

    if(x == 0)
    {
        return 0;
    }

    return fibonacci(x-1) + fibonacci(x-2);
}

int main()
{
    int i;
    scanf("%d", &i);
    printf("%d\n", fibonacci(i));
    return 0;
}
