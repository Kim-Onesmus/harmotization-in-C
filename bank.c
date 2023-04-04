#include <stdio.h>
#include <math.h>

int main(){
    float amount, monthly_interest, harmotization, interests;
    int period, no_of_payments, total;
    float interest = 15;


    printf("Enter loan amount: \n");
    scanf("%f", &amount);
    printf("Enter loan payment period in years: \n");
    scanf("%d", &period);

    interests = interest / 100;
    monthly_interest = interests / 12;
    no_of_payments = period * 12;

    harmotization = amount * monthly_interest  * pow(1+monthly_interest, no_of_payments) / (pow(1 + monthly_interest, no_of_payments) -1);
    printf("The Harmotized monthly payment for your loan is:\n%.2f/month \n", harmotization);
    total = no_of_payments * harmotization;
    printf("At the end of %d years you will have paid:\n%d \n", period, total);

    return 0;
}