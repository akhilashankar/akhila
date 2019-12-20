/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,a,sum=0,f,r;
    
    printf("enter a number");
    scanf("%d",&a);
    int temp=a;
    while(a!=0)
    {
        r=a%10;
        f=1;
        for(i=1;i<=r;i++)
        {
         f=f*i;
        }
        sum=sum+f;
        a=a/10;
    }
    if(temp==sum)  
    
        printf("number is a strong number");
    else
        printf("number is not a strong number");
        
        
    

    return 0;
}

