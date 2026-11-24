// Find the Greatest number from three;
#include <iostream>
using namespace std;

int main ()
{
    cout << "=========================\n";
    cout << "== The greatest number ==\n";
    cout << "=========================\n";

    int num1 , num2 , num3;
    cout << "Enter num1 : ";
    cin >> num1;
    cout << "Enter num2 : ";
    cin >> num2;
    cout << "Enter num3 : ";
    cin >> num3;

    if ( num1 > num2 && num1 > num3 )
        cout << "The " << num1 << " is the GREATEST" << endl;
    else if ( num2 > num1 && num2 > num3 )
        cout << "The " << num2 << " is the GREATEST" << endl;
    else if ( num3 > num1 && num3 > num2 )
        cout << "The " << num3 << " is the GREATEST" << endl;
    else if ( num1 == num2 && num1 == num3 )
        cout << "All the number is equals" << endl;
    else 
        cout << "Error in input of the numbers" << endl;
    
    cout << "=========================\n";
    return 0;
}