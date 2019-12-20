/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    if(n>=5&&n<=10)
    {
        for(i=n;i>=1;i--)
        {
            for(j=i;j<=n;j++)
            {
                printf("%d",j);
            }
            printf("\n");
        }
    }

    return 0;
}


