#include<stdio.h>
#include<conio.h>
void fun();
void disp();
int a;
void main()
{
    printf("%d%d",a);
    fun();
    disp();
    
    getch();
}
        void fun()
        {
            int a=5;
            printf("%d",a);
        }
        void disp()
        {
            int a=10;
            printf("%d",a);
        }