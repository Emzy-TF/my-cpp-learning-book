#include <iostream>
#include <cmath>
#include <math.h>
#include <string.h>
using namespace std;

int main() {

 const double pi = 22/7;
 const float gravity = 9.81;

 double x, y;

 string operation;
 string operators;
 
 double addition, multiplication, division, subtraction;
 string add, sum, multiply, times, subtract, minus, divide;
 
 add = sum = "add", "sum";
 subtract = minus = "subtract", "minus";
 multiply = times = "multiply", "times";
 divide = "divide";

 char SUM, MULTIPLY, SUBTRACT, DIVIDE;
 SUM = '+';
 MULTIPLY = 'X', '*';
 SUBTRACT = '-';
 DIVIDE = '/';

 sum = SUM;
 subtract = SUBTRACT;
 multiply = MULTIPLY;
 divide = DIVIDE;

 cout <<"input: ";
 cin >> x;
 cout << x;

 cin >> operation;
 cout <<"Input: "<< x << operation << "\n";

 cin >> y;
 cout <<"Input: "<< x << operation << y << "\n";

 addition = x + y;
 multiplication = x * y;
 division = x / y;
 subtraction = y - x;

  if (operation == sum)
  {
   cout << x << operation << y << "=" << addition;
  }
  if (operation == subtract)
  {
   cout << x << operation << y << "=" << subtraction;
  }
  if (operation == multiply)
  {
   cout << x << operation << y << "=" << multiplication;
  }
  if (operation == divide)
  {
   cout << x << operation << y << "=" << division;
  }
   else if (operation != sum || operation != subtract || operation != multiply || operation != divide)
   {
    cout << "Invalid operation. Please use +, -, X, * or /.\n";
   }

 cout << "\n";
 return 0;
}
