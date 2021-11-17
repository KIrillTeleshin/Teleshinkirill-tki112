#include <iostream>
#include <cmath>

double num1, num2;		//Designation of global variables


//A brief calculation of addition
//Return 0 If no errors
int CalculateAddingNumbers ()
{
  double AddingNumbers;
  AddingNumbers = num1 + num2;
  std::cout <<"the result of addition=" << AddingNumbers << std::endl;
  return 0;
}


//A brief calculation of the subtraction
//Return 0 If no errors
int CalculateSubtractingNumbers ()
{
  double SubtractingNumbers;
  SubtractingNumbers = num1 - num2;
  std::cout <<"the result of subtraction=" << SubtractingNumbers << std::endl;
  return 0;
}


//A brief calculation of multiplication
//Return 0 If no errors
int CalculateMultiplicationOfNumbers ()
{
  double MultiplicationOfNumbers;
  MultiplicationOfNumbers = num1 * num2;
  std::cout <<"the result of multiplication=" << MultiplicationOfNumbers << std::endl;
  return 0;
}


//A brief calculation of the division
//Return 0 If no errors
int CalculateDividingNumbers ()
{
  double DividingNumbers;
  DividingNumbers = num1 / num2;
  std::cout <<"division result=" <<DividingNumbers << std::endl;
  return 0;
}

//Brief Entry point
//Return 0 If no errors
int main ()
{
  std::cout << "enter a num1: ";	//enter the value of two variables num1 and num2
  std::cin >> num1;
  std::cout << "enter a num2: ";
  std::cin >> num2;

  CalculateAddingNumbers ();
  CalculateSubtractingNumbers ();
  CalculateMultiplicationOfNumbers ();
  CalculateDividingNumbers ();
  return 0;
}

