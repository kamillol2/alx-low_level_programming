#include<stdio.h>
#include<limits.h>
int main(void)
{
        int a = INT_MIN;
        printf("%d",a);

        int f = a;

        printf("%d",-f);

        return(0);
}