//converter from ASCII to char
#include <iostream>
using namespace std;

int main()
{
    cout << "================================\n";
    cout << "==  converter ASCII >>> char  ==\n";
    cout << "================================\n";

    int val;
    cout << "Enter the ASCII number : ";
    cin >> val;
    cout << "The character of "<< val <<" is : " << char(val) << endl;

    cout << "================================\n";
    cout << "Program finished!\n";
}