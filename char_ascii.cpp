//converter from char to ASCII
#include <iostream>
using namespace std;

int main()
{
    cout << "================================\n";
    cout << "==  converter char >>> ASCII  ==\n";
    cout << "================================\n";

    char val;
    cout << "Enter the character : ";
    cin >> val;
    cout << "The ASCII number is : " << int(val) << endl;

    cout << "================================\n";
    cout << "Program finished!\n";
}