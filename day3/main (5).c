/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ //8,6,18,150....
    int res,s=8,n,i;
    printf("enter  n");
    scanf("%d",&n);
    printf("%d\t",s);
    for(i=1;i<=n;i++)
    {
        res=i*((s*i)-(i+1));
        printf("%d\t",res);
        s=res;
    }
    

    return 0;
}

