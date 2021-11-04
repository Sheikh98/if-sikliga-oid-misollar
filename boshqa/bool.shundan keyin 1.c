/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    bool result1, result2;
    double x,y;
    printf("son kriting ");
    scanf("%lf", &x);
    printf("son kriting ");
    scanf("%lf", &y);
    
    result1 = x>y;
    result2 = x<y;
    
    if (result1)  {
        printf("x,1 y,0\n");
    }else{
        if (result2){
            printf("y,1 x,0");
            
        }
        }
        
    return 0;
}
    

