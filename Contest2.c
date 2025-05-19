#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {

        long long int a,b,c;
        scanf("%ld %ld %lld", &a, &b, &c);

        if (a == 0 || b == 0)
        {
            if (a == 0)
                printf("Second\n");
            else
                printf("First\n");
        }
        else
        {
            if (c % 2 == 0)
            {
                if (a > b)
                    printf("First\n");
                else
                    printf("Second\n");
            }
            else
            {
                if (a >= b)
                    printf("First\n");
                else
                    printf("Second\n");
            }
        }
    }
    return 0;
}



