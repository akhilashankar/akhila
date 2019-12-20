/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int m,n,sum=0;
    printf("enter 2 numbers");
    scanf("%d%d",&m,&n);
    while(m>0)
    {
        if(m%2!=0)
        {
            sum+=n;
        }
        m=m/2;
        n=n*2;
    }
    printf("the product of the nums is %d",sum);
    

    return 0;
}

