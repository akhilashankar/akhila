/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    int op;
    printf("enter a,b");
    scanf("%d%d",&a,&b);
    printf("choose an operation");
    printf("menu:1.addition\n2.subtraction\n3.multiplication\n4.division\n5.modulus\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        printf("sum=%d",a+b);
        break;
        case 2:
        printf("difference=%d",a-b);
        break;
        case 3:
        printf("product=%d",a*b);
        break;
        case 4:
        printf("division=%d",a/b);
        break;
        case 5:
        printf("remainder=%d",a%b);
        break;
        default:
        printf("enter valid operator");
        break;
    }

    return 0;
}

