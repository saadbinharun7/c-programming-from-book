//if loan amount is 10000tk and interest rate is 35%
//then what would be the payment with interest in 5 years? what would be monthly amount?

#include <stdio.h>

int main(){

    double loan_amount , interest_rate , years , total_amount , monthly_amount;

    printf("Enter the loan amount : ");
    scanf("%lf", &loan_amount);

    printf("Enter the interest rate : ");
    scanf("%lf", &interest_rate);

    printf("Number of years : ");
    scanf("%lf", &years);

    total_amount = loan_amount + loan_amount * interest_rate * years / 100.00;
    monthly_amount = total_amount / years * 12;

    printf("\nTotal amount: %.2lf", total_amount);
    printf("\nMonthly amount: %.2lf", monthly_amount);



    return 0;
}
