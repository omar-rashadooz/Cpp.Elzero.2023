// this is a simple age calculater to your (weeks, days, hours, minutes and seconds) you are lived
// developed by omar-rashadooz in Nov 2026

#include <iostream>
using namespace std;

int main()
{
    cout << "================================\n";
    cout << "== calculate your age program ==\n";
    cout << "================================\n";

    string name;
    cout << "Enter your name : ";
    cin >> name;

    int age;
    cout << "Enter your age  : ";
    cin >> age;

    int age_in_weeks   = age            * 52;
    int age_in_days    = age            * 365;
    int age_in_hours   = age_in_days    * 24;
    int age_in_minutes = age_in_hours   * 60;
    int age_in_seconds = age_in_minutes * 60;

    cout << "================================\n";
    cout << "\n" << "welcome, " << name << "\n\n";
    cout << "your age in weeks   : " << age_in_weeks   << "\n";
    cout << "your age in days    : " << age_in_days    << "\n";
    cout << "your age in hours   : " << age_in_hours   << "\n";
    cout << "your age in minutes : " << age_in_minutes << "\n";
    cout << "your age in seconds : " << age_in_seconds << "\n";

    cout << "\n================================\n";
    cout << "\nProgram finished!\n";

    return 0;
}
