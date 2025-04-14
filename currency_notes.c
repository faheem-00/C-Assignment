#include <stdio.h>

int main(){
    int wd_amount, h_notes;
    
    printf("Enter the amount to be withdrawed in hundreds: ");
    scanf("%d", &wd_amount);

    h_notes= wd_amount/100;

    printf("There are %d hundred notes in your amount.", h_notes);
}