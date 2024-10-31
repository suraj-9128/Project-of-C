#include<stdio.h>
#include<conio.h>
void show();
void main()
{
    int a,b;
    printf("\n%d",a);
    show();
    getch();
}
void show()
{
    int a,b;
    printf("\n%d%d",a,b);
}

/* or, local variable  

#include<stdio.h>
#include<conio.h>
void show();
void main()
{
    int a,b;
    printf("%d",a);
    if(a!=0)
    {
        int b;
        printf("%d",b);

    }
    getch();
}
*/