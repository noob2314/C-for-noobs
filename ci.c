#include <stdio.h>
#include<math.h>
int main()
{
    float principal_amount;
    float interest_rate;
    float time_period;
    float final_amount;
    float n;
    
    printf("enter the principal amount:");
    scanf("%f",&principal_amount);
    
    printf("enter the time period:");
    scanf("%f",&time_period);
    
    printf("enter the interest rate:");
    scanf("%f",&interest_rate);
    
    printf("enter the no.of times interest Applied per time period:");
    scanf("%f",&n);
    
    final_amount=(principal_amount*pow(1+interest_rate/n,n*time_period));
    printf("final amount=%f",final_amount);
    
}