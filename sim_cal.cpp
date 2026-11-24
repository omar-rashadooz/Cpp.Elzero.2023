#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";
    cout << "=== A Simple calculator ===\n";
    cout << "===========================\n";

    float num1 , num2 ;
    cout << "Enter the frist number  : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;

    cout << "===========================\n";
    string operation;
    cout << "Choose the Operation (+,-,*,/): ";
    cin >> operation;
    cout << "===========================\n";

    if ( operation == "+")
        cout << "Result is : " << num1 + num2 << endl;
    else if ( operation == "-")
        cout << "Result is : " << num1 - num2 << endl;
    else if ( operation == "*")
        cout << "Result is : " << num1 * num2 << endl;
    else if ( operation == "/")
        cout << "Result is : " << num1 / num2 << endl;
    else
        cout << ">>>>> Unknown process <<<<<" << endl;
    cout << "===========================\n";
    
    return 0;
}