/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //7 10 8 11 9
    int n,i=7,sum=0,sum1=0;
    printf("enter n");
    scanf("%d",&n);
    printf("%d\t",i);
    for(i=7;i<=n;i++)
    {
        
        sum=i+3;
        printf("%d\t",sum);
        
        sum1=sum-2;
        printf("%d\t",sum1);
    }

    return 0;
}

