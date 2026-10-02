#include<stdio.h>
#include<cs50.h>
void is_even(int n)
{
    if(n%2==0)
    {printf("True because %d is even\n",n);}
    else {
        printf("False because %d is odd\n",n);
    }
    int main(void)
    {
        int x=get_int("Enter number:");
        is_even(x);
    }
    return 0;
}
