#include<stdio.h>
#include<cs50.h>
int main(void){
    int i;
    int numbers[5]={10,20,30,40,50};
    for(i=0;i<5;i++)
    {
        printf("numbers=%i\n", numbers[i]);
    }
    return 0;
}
