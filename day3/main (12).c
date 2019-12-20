/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int rr,br;
    printf("enter number of runs required");
    scanf("%d",&rr);
    printf("enter number of  balls remaining");
    scanf("%d",&br);
    if(br>100)
    {
        printf("%d runs in %d overs @ %d per over",rr,br/5,rr/(br/5));
    }
    else
    {
        printf("%d runs in %d balls @ %d per ball",rr,br,(rr/br));
    }
    

    return 0;
}

