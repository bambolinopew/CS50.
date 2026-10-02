#include<stdio.h>
#include<cs50.h>
int main(void) {
    int a=get_int("Enter a:");
    int b=get_int("Enter b:");
    int sum=a+b;
    int difference=a-b;
    int product=a*b;
    int quotient=a/b;
    int remainder=a%b;
    printf("Sum:%d\n",sum);
    printf("Difference:%d\n",difference);
    printf("Product:%d\n",product);
    printf("quotient:%d\n",quotient);
    printf("remainder:%d\n",remainder);
    return 0;
}
