#include<stdio.h>
int main()
{
    int n,c,r,arm=0;
    printf("\nenter number");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        arm=arm+(r*r*r);
        n=n/10;
    }
    if(c==arm)
    printf("armstrong number");
    else
    printf("\n not armstrong number");
    return 0;

}