//odd or even program
#include <iostream>
using namespace std;

int main ()
{
    cout << "=========================\n";
    cout << "== Odd or Even numbers ==\n";
    cout << "=========================\n";
    
    cout << "Enter the number : ";
    int num;
    cin >> num;

    if ( num % 2 == 0)
        cout << "The number " << num << " is Even" << endl;
    else
        cout << "The number " << num << " is Odd" << endl;
    
    return 0;
}