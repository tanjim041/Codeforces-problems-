#include<stdio.h>
#include<string.h>
int main(void)
{
    int n,len;
    scanf("%d", &n);
for (int i=n; i > 0; i--)
{
    char s1[100];
    scanf("%s", &s1);
    len=strlen(s1);
   if(len>10)
   {
        printf("%c", s1[0]);
    printf("%d",len-2);
    printf("%c\n",s1[len-1]);
   }
   else{
    printf("%s\n",s1);
   }
}
}
