#include <iostream>
using namespace std;
int main() {

  char op;
  float num1, num2;
  
  cout << "Enter first operands: ";
  cin >> num1;
  
  cout << "Enter second operands: ";
  cin >> num2;

// It takes the operator we want to perform 
  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}