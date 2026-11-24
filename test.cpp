#include <iostream>
using namespace std;

int main()
{
    int nums[3][3] = {{1, 2, 3,}, {3, 4, 5}};
    
    cout << nums[1][2] << endl;
    
    int n = sizeof(nums) / sizeof(int);
    cout << "Number of items is " << n << endl;
    return 0;
}