/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void printpattern(int);
void main()
{
    int n;
    scanf("%d",&n);
    if(n>=4&&n<=10)
    {
        printpattern(n);
    }
}
void printpattern(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        printf("*");
        for(j=1;j<=(i*2)-1;j+=2)
            {
                printf("%d",j);
            }
            for(j=(i-1)*2-1;j>=1;j-=2)
            {
                printf("%d",j);
            }
            printf("*");
            printf("\n");
    }
}







