#include<stdio.h>
#include<cs50.h>
int main(void) {
    int i;
    int fact=1;
    int n=get_int("enter n:");
    if(n>0){
        for(i=1; i<=n; i++)
    fact*=i;
    {printf("Fact=%d\n",fact);
    }
    }
    else
    {printf("fact is less or equal to zero\n");
    }
return 0;
}
