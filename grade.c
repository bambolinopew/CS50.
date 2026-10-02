#include<stdio.h>
#include<cs50.h>
int main(void) {
    int marks=get_int("Enter your marks");
    if(marks>=80){
        printf("Grade A");
    }
        else if("marks>=60 && marks<80") {
            printf("Grade B");
            }
            else {
            printf("Grade C");
            }
            return 0;
}
