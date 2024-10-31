#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    static int b;
    printf("%d%d",a,b);
    getch();
}


/* using function 

#include<stdio.h>
#include<conio.h>
void fun()
{
    int a=4;
    static b=8;
    printf("%d%d",a,b);
    a++;
    b++;
    }
    void main()
    {
        fun()
        getch(); 
        }
        
        */