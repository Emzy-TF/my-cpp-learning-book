#include <iostream>
using namespace std;
//you can add "std::" before the cout-like statement if namespace std is not included. example (std::cout << "yout statement":)
#include <string.h> //include string header file to use string data type.
#include <cmath> //include cmath header file to use math functions.

int main() {
  
  cout << "Hello World!"; //cout is pronounced see-out, it can be use multiple time in a program and it's use to print plain-text.
 //to print text the quote sign ("") is needed: while it is not needed for numbers.
 cout << 99 << "\n\n";
 //you can also perform mathematical calculations.
 cout << 7 + 5 << "\n";
 cout << 4 * 23 << "\n\n";
 // to insert new line in the output, "\n" can be used in the quote before the next cout statement.
 cout << "Hello! \n";
 cout << "It's Emmy here. \n";
 //the operator "<<" can als\no be used again to place "\n" character in after the text.
 cout << "Hello!" << "\n";
 cout << "It's Emmy here \n\n";
 //tip: two "\n" characters after each other will create blank line.
 //both "\n" and "endl" are used to break line. However "\n" is most used.

 /*this is a multi-line
 commenr*/

 /*
 VARIABLES.
 Variables are containers for storing data values.
 "int" - stores integers(whole nember).
 "float" - stores decimal munbers up to 7digits* 
 "double" - stores decimal numbers up to 15digits*.
 floating point number can also be a scientific number with an "e" to indicate the power of 10.
 "char" - stores single character
 "string" - stores text
 and "bool" - store value with two states: "true" or "false"
 note: to use <string>, string header file much be included int he source code.

 the "auto" keyword can be used to automatically detect data type.
    example: instead of "int x = 5" if can also be "auto x = 5".
   "auto" only works when you assign a value at the same time (it cannot be declared without assigning a value to it)
   once the type "auto" is chosen it stays the same and cannot be changed to another data type.  

  Declaring variables
  Syntax --> type(variable type) variablename = value
  */

 int A = 4;
cout << A << "\n";

float A1 = 35;
cout << A1 << "\n";

float A2 = 35e3;
cout << A2 << "\n";

 double B1 = 1.0;
cout << B1 << "\n";

double B2 =1.0e6;
cout << B2 << "\n";

 char C = 'e';
cout << C << "\n";

 string D = "forth";
cout << D << "\n";

 bool E = true;
cout << E << "\n";

auto G = 22/7;
cout << G << "\n\n";

//variables can be declared and assign values later.
int F;
F = 36;
cout << F << "\n\n";

//to combine both text and variable: separate them with the "<<" operator.
string Lname = "Fayoda ";
string Fname = "Taiwo "; 
int Myage = 19;

cout << "My name is " << Lname << Fname << "and i'm " << Myage << "years old. \n\n";

//use "+" operator to add variables together.
//declare more than one variable of thesame type, use a comma-seperated list.
int x = 5, y = 6, z = 7;
cout << x + y + z << "\n\n";

//you can also assign one value to multiple variables in one line.
int X, Y, Z;
X = Y = Z = 45;
cout << X + Y + Z << "\n\n"; 

/*Identifiers:
NAMES can sontian letters,digits and underscores.
Must begin with a letter or an underscore.
They are case sensitive. 
Cannot contain whitespace or special characters.
Reserve words like (int) cannot be used as names.
 */

//when you do not want to change existing variable values, use the "const" keyword.
const int Myluckynum = 017;
const string MyUsername = "FTEmmy-017";

cout << "My username is " << MyUsername << " and my lucky number is" << Myluckynum << "\n\n";
//note: a declared constant must be assigned with a value.

/*
User Input:
"cin" is used to get user input. It is a predefined operator that read data from the keyboard with the extract opertor "<<".
*/
int I;
cout << "type a number "; //type a nimber and press enter
cin >> I; //get user input from keyboard.
cout << "your number is " << I << "\n\n"; //Display the input value.

/*
Operators:
it is used to perform operations on variable.
it is used to add a variable and a value, a variable and another variable.
it can be used to add together two values.
 Example: int x =100 + 50;
*/
int sum1 = 100 + 50; //sum1 = 150
int sum2 = sum1 + 250; //sum2 = 150 + 250 = 400
int sum3 = sum2 + sum1; //sum3 = 400 + 150 = 550
cout << sum3 << "\n\n"; //output will be 550

/*
Operators in c++ are divided into 5groups
 Arithemetic, Assignment, comparison, logical and Bitwise operators

 Arithemetic Operators are use to perform common maths problems.
  - subtraction, * multiply, / division, %(modulus: returns the division remainder), ++ increment(increase value of variable by 1), -- Decrement(Decrease value of variable by 1).
 
 Assignment operators are use to assign values to variable. assignment operator (=)
  Example: "int x = 5;"
  
  The addition assignment operator (+=) adds value to a variable. 
   example: "int x = 10; x += 5;"
 
  list of all assignment operators: = (x = x), +=(x = x + x1), -=(x = x - x1), *=(x = x * x1), /=(x = x / x1), %=(x = % x1), &=(x = x & x1), |(x = x | x1), ^=(x = x ^ x1), >>=(x = x >> x1), <<=(x = x << x!).   
 
  Comparison operators are used to compare two values.
  They return a boolean value (true or false).
  - == (equal to), != (not equal to), > (greater than), < (less than), >= (greater than or equal to), <= (less than or equal to).
  Example: "if (x == y) { cout << "x is equal to y"; }"

  Logical operators are used to combine two or more conditions.
  - && (logical AND), || (logical OR), ! (logical NOT).
  Example: "if (x > 5 && y < 10) { cout << "x is greater than 5 and y is less than 10"; }"
*/

/*
More on Strings:
 String Concatenation:
   the "+" operator can be used to concatenate two strings together to make a new string.
   add a space after FName to create a space between Fname and Lname on output. However, you could also add a space with quotes (" " or ' '):

 Append: strings can also be concatenate with the "append()" function.

   */
string fullname = Fname + Lname; //concatenate two strings together.
cout << "My full name is " << fullname << "\n\n";

string fullname2 = Fname.append(Lname); //append two strings together.
cout << "My full name is " << fullname2 << "\n\n";

//string length
int length = fullname.length(); //get the length of a string.
cout << "The length of my full name is " << length << "\n\n";

//User Input Strings
string userInput;
cout << "Enter your name: ";
cin >> userInput; //get user input from keyboard.
cout << "Your name is " << userInput << "\n\n"; 
/*just the cin considers whitespace, tabs as a terminating character and can only store 1 word input.
 example: if you type "Emmy Fayoda", it will only store "Emmy" in the variable userInput.
To get a full line of input including whitespace, use "getline()" function to read a line of text. it takes cin as first parameter and the string variable as second parameter.
example:
*/
string fullInput;
cout << "Enter your full name: ";
getline(cin, fullInput); //get full line of input from keyboard.
cout << "Your full name is " << fullInput << "\n\n";

/*
C-Style Strings:
C-style strings are created with the "char" data type instead of "string". You must use the "char" type and create an array of characters to make a "string" in C.
Example:
*/
string normalstring = "hello"; //Regular string
char Cstylestring[] = "hello"; //C-style string (an array of characters)

/*
C++ Math:
C++ has many function that can be used to perform mathematical operations.
 Max and min: The max(x,y) function can be used to find the highest value between x and y:
   Example: "cout << max(5, 10) << "\n"; //output will be 10
   
 The min(x,y) function can be used to find the lowest value between x and y:
    Example: "cout << min(5, 10) << "\n"; //output will be 5

C++ <cmath> library: other functions such as "sqrt", "round" and "log" can be found in the <cmath> heather file.
  Examples:
*/


cout << "The square root of 16 is " << sqrt(16) << "\n"; //output will be 4
cout << "The round of 4.5 is " << round(4.5) << "\n"; //output will be 5
cout << "The log of 100 is " << log(100) << "\n"; //output will be 4.60517 (natural logarithm)
cout << "The log10 of 100 is " << log10(100) << "\n"; //output will be 2 (base 10 logarithm)


/*
C++ Booleans:
C++ has a boolean data type that can be used to store true(1) or false(0) values.
it is declared with the "bool" keyword.
Example: bool isTrue = true; (isTrue is a boolean variable that stores true value).
         bool isfalse = false; (isFalse is a boolean variable that stores false value).    
*/
const int votingage = 21; //constant variable that stores the voting age.
cout << (Myage > votingage);

if (Myage >= votingage)
{
  cout << "You are old enough to vote.\n";
} else
{
  cout << "Not old enough to vote.\n";
} //output: Not old enough to vote. recall that {Myage} is 19, which is less than {votingage} 21.

/*
conditions and if statements (if...else):
if statements are used to execute a block of code to be executed, if the specified condition is true.
else statements are used to execute a block of code if the condition is false.
if (condition) {
    // code to be executed if condition is true
} else {
    // code to be executed if condition is false
}
    
use (else if) to specify a new condition to test, if the first condition is false.
if (condition1) {
    // code to be executed if condition1 is true
} else if (condition2) {
    // code to be executed if condition2 is true
} else {
    // code to be executed if both conditions are false
}

use (switch) statement to specify many alternatetive blocks of code to be executed.

note: "if" is in lower case letters. Uppercase letter or having any uppercase character will cause an error.

*/
if (20 > 18)
{
  cout << "20 is greater than 18.\n"; //output: 20 is greater than 18.
}
// we can also test variables
int age = 20;
if (age > 18)
{
  cout << "You are old enough to vote.\n"; //output: You are old enough to vote.
}

/*
Shorthand if...else (Tenary operator):
There is also short-hand if...else, which is know as tenary operator because it consist of three operands.
It can be used to replace multiple lines of code with a single line.
Syntax: 
   variable = (condition) ? expressionTrue(if true) : expressionFalse(if false);
*/
if (20 > 6)
{
  cout << "20 is greater than 6.\n";
}
//this can be replaced with the tenary operator:
(20 > 6) ? cout << "20 is greater than 6.\n" : cout << "20 is not greater than 6.\n";
//output: 20 is greater than 6.

/*
Switch statements:
Switch statements are used to execute one block of code among many alternative blocks of code.
Syntax: switch (expression) {
    case value1:
        // code to be executed if expression equals value1
        break;
    case value2:
        // code to be executed if expression equals value2
        break;
    // more cases...
    default:
        // code to be executed if expression doesn't match any case
}
        The "break" statement is used to stop the execution of the switch statement.
        The "default" keyword specifies some code to run if there is no case match:
*/
int day = 3; //day of the week (1-7)
switch (day) {
    case 1:
        cout << "It's Sunday .\n"; //output: It's Monday.
        break;
    case 2:
        cout << "It's Monday .\n"; //output: It's Monday.
        break;
    case 3:
        cout << "It's Tuesday .\n"; //output: It's Tuesday.
        break;
    case 4:
        cout << "It's Wednesday .\n"; //output: It's Wednesday.
        break;
    case 5:
        cout << "It's Thursday .\n"; //output: It's Thursday.
        break;
    case 6:
        cout << "It's Friday .\n"; //output: It's Friday.
        break;
    case 7:
        cout << "It's Saturday .\n"; //output: It's Saturday.
        break;                          
    default:
        cout << "Invalid day .\n"; //output: Invalid day.
        break;
}
        
/*
While Loop:
Loops can be used to execute a block of code repeatedly, as long as the specified condition is true.
While loops are used to execute a block of code repeatedly, as long as the specified condition is true.
syntax:
while (condition) {
    // code to be executed
}
    note: Do not forget to increase the variable used in the condition, otherwise the loop will run forever.


*/        
int i = 98; //initialize a variable
while (i > 5)
{
  cout << i << "\n"; //output: 98, 97, 96, ..., 6
  i--; //decrease the variable by 1
}

while (i < 100)
{
  cout << i << "\n"; //output: 6, 7, 8, ..., 99
  i++; //increase the variable by 1
}

/*
The Do/While Loop:
A do/while loop is similar to a while loop, but it executes the block of code at least once, before checking the condition. and then loop if the condition is true
syntax:
do {
    // code to be executed
} while (condition);

note: the semicolon ";" after the while is required!
*/
int j = 8; //initialize a variable
do {
    cout << j << "\n"; //output: 0, 1, 2, ..., 9
    j++; //increase the variable by 1

} while (j < 10); //loop while j is less than 10
// the loops still runs at least once even if the condition is false, because the code block is executed before the condition is checked.

 return 0;
}
 