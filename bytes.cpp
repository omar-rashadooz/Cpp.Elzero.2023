//calculater of bytes
#include <iostream>
using namespace std;

int main ()
{
    cout << "================================\n";
    cout << "== calculater of byte program ==\n";
    cout << "================================\n";
    
    int num;
    cout << "Enter the number of kilobytes : ";
    cin >> num;
    cout << "================================\n";

    int num_bytes = num * 1024;
    int num_bits  = num_bytes * 8;

    cout << "Number of Kilobytes :" << num << "\n";
    cout << "Number of Bytes that equal " << num << "KB is : " << num_bytes << "\n";
    cout << "Number of Bits that equal " << num << "KB  is : " << num_bits  << "\n";

    cout << "================================\n";
    cout << "Program finished!" <<"\n";
}