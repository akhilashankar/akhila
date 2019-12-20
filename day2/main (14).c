/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int pin,b=1000,m,d,w;
    printf("enter pin");
    scanf("%d",&pin);
    if(pin==1234)
    {
        printf("menu:\n1.balannce\n2.deposit\n3.withdraw\n4.exit\n");
        scanf("%d",&m);
        switch(m)
        {
            case 1:
            printf("balance=%d",b);
            break;
            case 2:
            printf("enter amount to be deposited\n");
            scanf("%d",&d);
            if(d%100==0)
            
                printf("new balance=%d",b+d);
            else
                printf("sorry cant deposit");
            break;    
            case 3:
            printf("enter amount to withdraw\n");
            scanf("%d",&w);
            if(w%100==0)
            {
                if(b>w)
                
            printf("new balance=%d",b-w);
                else
               printf("sorry cant withdraw");
            }
            
            else
            printf("sorry cant withdraw");
            
            break;
            case 4:
            printf("exit");
            break;
            default:
            printf("enter valid menu item");
            
        }
    }
    else
    printf("invalid pin");

    return 0;
}

