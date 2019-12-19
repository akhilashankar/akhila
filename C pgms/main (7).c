/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char name[20],sname[20];
    printf("enter your name and surname\n");
    scanf("%s%s",&name,&sname);
    printf("%s\t%s\n\n",name,sname);
    
    printf("%s\n%s\n\n",name,sname);
    
    printf("%s\b%s\n\n",name,sname);
    
    printf("%s\r%s\n\n",name,sname);

    return 0;
}

