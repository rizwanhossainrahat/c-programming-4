// Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%b==0 )
    {
        printf("Multiples\n");
    }
    else if (b%a==0)
    {
        printf("Multiples\n");
    }
    else
    {
        printf("No Multiples\n");
    }
    return 0;
}