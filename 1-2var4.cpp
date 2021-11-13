#include <iostream>
int main()
{
double num1, num2;                                           //multiple notation of two numbers num1 and num2
  std::cout << "enter a num1: ";                             //enter the value of two variables num1 and num2
  std::cin >> num1;
  std::cout << "enter a num2: ";
  std::cin >> num2;
double sum = num1 + num2;                                    //short designation of a variable for calculating the ratio of numbers "num1" and "num2"
    std::cout << " num1 + num2 = " << sum << std::endl;      //the result of adding num1 and num2
sum = num1 - num2;                                           //the result of subtracting num2 from num1
    std::cout << " num1 - num2 = " << sum << std::endl;      //output of the "sum" variable
sum = num1 * num2;                                           //the result of multiplying num1 by num2
    std::cout << " num1*num2 = " << sum << std::endl;        //output of the "sum" variable
sum = num1/num2;                                             //the result of dividing num1 by num2
    std::cout << " num1/num2 = " << sum << std::endl;        //output of the "sum" variable
return 0;
}