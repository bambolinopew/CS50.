#include<stdio.h>
#include<cs50.h>
int main(void){
    int age=get_int("Enter your age:");
    string name=get_string("Enter your name:");
    printf("Hello %s, you are %d years old", name,age);
    return 0;
}
