#include<stdio.h>
int main()
{
    int a,b,c;
printf("\n enter three no.");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)

printf("greater no. is:=%d",a);

else if(b>a&&b>c)

    printf("greater no. is:=%d",b);
else
printf("greater no. is:=%d",c);
return 0;

}