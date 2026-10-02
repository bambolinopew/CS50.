#include<stdio.h>
#include<cs50.h>
int main() {
    int i;
    i=get_int("enter n: ");
    if(i>0)
    {
        printf("positive");
    }
    else if (i<0)
    {
        printf("negative");
    }
    else
    { printf("zero");
    }
    return 0;
}
