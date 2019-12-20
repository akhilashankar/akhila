/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    int a,n=0,sum=0,r,temp,temp1;
    printf("enter a number");
    scanf("%d",&a);
    temp=a;
    temp1=a;
    while(temp!=0)
    {
        temp=temp/10;
        ++n;
    }
    
    while(a!=0)
        {
            r=a%10;
            sum=sum+pow(r,n);
            a=a/10;
        }
        
    if(temp1==sum)
      {
        printf("it is an armstrong num");
      }
   
    else
       {
     printf("invalid");
       }
    
return 0;
}

