/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  // accept 3 numbers and display largest numbers
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if((a>b)&&(a>c))
  {
      printf("%d\tis large",a);
  }
  else if((b>a)&&(b>c))
  {
      printf("%d\tis large",b);
  }
  else
  {
      printf("%d\tis large",c);
  }

    return 0;
}

