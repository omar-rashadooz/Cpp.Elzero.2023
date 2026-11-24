#include <iostream>
using namespace std;

int main ()
{
    cout << "================================\n";
    cout << "==== Rank of player checker ====\n";
    cout << "================================\n";

    string name;
    int points;
    cout << "What is your name : ";
    cin >> name;
    cout << "Welcome " << name << " Enter your points : ";
    cin >> points;

    cout << "================================\n";
    if ( points < 2000 )
        cout << "you are in bronze stage"  << endl;
    else if ( 2000 < points && points < 4000 )
        cout << "you are in silver stage"  << endl;
    else if ( 4000 < points && points < 6000 )
        cout << "you are in Golden stage"  << endl;
    else if ( 6000 < points && points < 8000 )
        cout << "you are in platium stage" << endl;
    else if ( 8000 < points && points < 10000 )
        cout << "you are in Diamond stage" << endl;
    else if ( 10000 < points )
        cout << "you are a LEGENDARY !!"   << endl;
    else
        cout << "Enter you points again, " << name << endl;

    cout << "================================\n";
    return 0;
}