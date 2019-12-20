/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    if(n>=5&&n<=15)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n-i;j++)
            {
                printf(" ");
            }
            for(k=i;k>=1;k--)
            {
                printf("%d",k);
            }
            printf("\n");
        }
        
    }

    return 0;
}

