#include<stdio.h>
int main()
{
    int a,b;
    printf("\n enter two no.");
    scanf("%d%d",&a,&b);
    printf("\n before swapping");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n after swapping");
    return 0;
}

/* a=5
b=10

a=15
b=5
a=10
*/