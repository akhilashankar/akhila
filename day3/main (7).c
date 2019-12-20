/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{// 80 10 70 15 60 20....
    int n,s1=80,s2=10,i,j;
    printf("enter n");
    scanf("%d",&n);
    printf("%d\t%d\t",s1,s2);
    for(i=1;i<=n;i++)
    {
        s1=s1-10;
        printf("%d\t",s1);
        s2=s2+5;
        printf("%d\t",s2);
    }

    return 0;
}

