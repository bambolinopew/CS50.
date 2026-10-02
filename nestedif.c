#include<stdio.h>
#include<cs50.h>
int main(void){
    int age=get_int("whats your age:");
    int student_status=get_int("whats your status:");
    if ("age<=12 && age>=60") {
        if (student_status==1)
        { printf("ticket price $80\n");}
        else {printf("ticket price $100\n");}
    }
    else if (age<12) {
        printf("Ticket price $50\n");
    }
    else
    {printf("Ticket price $60\n");}
    return 0;
}
