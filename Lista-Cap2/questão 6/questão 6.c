#include <stdio.h>

int main()
{
    int n = 5;
    int x = ++n;
    printf("%d\t%d\t%d\n", n, n+1, n++);


    return 0;
}