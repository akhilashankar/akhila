/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ //53 53 40 40 27 27.....
    int i,n,j=53;
    printf("enter n");
    scanf("%d",&n);
    printf("%d\t%d\t",j,j);
    
    for(i=1;i<=n;i++)
    {
        j=j-13;
        printf("%d\t%d\t",j,j);
    }

    return 0;
}

