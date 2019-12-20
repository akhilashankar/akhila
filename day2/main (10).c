/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //accept height and display details//
    int h;
    printf("enter height");
    scanf("%d",&h);
    if(h<=190)
    {
        if(h<150)
        {
            printf("dwarf");
        }
        else if((h>150)&&(h<165))
        {
            printf("average height");
        }
        else
        {
            printf("tall");
        }
    }
    else
    {
        printf("abnormal height");
    }

    return 0;
}

