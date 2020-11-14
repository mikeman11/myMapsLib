#include <stdio.h>

#include "myMath.h"

int main(void)
{
    double userNumber = 0.0;
    double firstFunctionResult = 0.0;
    double seconedFunctionResult = 0.0;
    double thirdFunctionResult = 0.0;


    printf("Please insert a real number: ");
    scanf("%lf", &userNumber);

    firstFunctionResult = sub(add(Exponent((int)userNumber), Power(userNumber, 3)), 2);
    printf("The value of f(x) = e^x + x^3 - 2 at the point %lf is : %.4lf\n", userNumber, firstFunctionResult);




    seconedFunctionResult = add(mul(3,userNumber),mul(2,Power(userNumber,2)));
    printf("The value of f(x) = 3*x + 2x^2 at the point %lf is : %.4lf\n", userNumber, seconedFunctionResult);





    thirdFunctionResult = div(mul(4,Power(userNumber,3)),5);
    printf("The value of f(x) = (4*x^3)/5 - 2*x at the point %lf is : %.4lf\n", userNumber, thirdFunctionResult);






    return 0;
}