#include<stdio.h>//D
int main(void)
{
    int t,n,a=0;
    scanf("%d", &t);
    while(t!=0)
    {
        scanf("%d", &n);
        if(n%3==0|| a==10)
            {
                printf("Second\n");
                a++;
            }
        else
        {
            printf("First\n");
            a=0;
        }
        t--;
    }
}
