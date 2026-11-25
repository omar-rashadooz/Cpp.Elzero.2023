//simple app to understand loops and arrays
#include <iostream>
using namespace std;

int main()
{
    cout << "===============================\n";
    cout << "== Guess the numbers program ==\n";
    cout << "===============================\n";

    int points =0;
    double answers[10];
    
    cout << "Guess the number in ?? place !!\n";

    double nums[10][5] =
    {
        {1, 1, 2, 3, 5 },                 //1+0,1+1,1+2,2+3
        {2, 4, 8, 32, 256 },              //2*1,2*2,2*4,4*8
        {-10, 8, -6, 4, -2 },             //-2 and replace
        {3, 6, 10, 15, 21 },              //+2,+3,+4,+5 
        {1, 5, 11, 17, 23 },              //1,3,5,7,11,13,17,19,23
        {0.1, 1.2, 2.3, 3.4, 4.5 },       // write the next number and move it 
        {4, 2, 8, 2 ,16 },                // 4**1/2, 2**3, 8**1/3, 2**4
        {212, 422, 632, 842, 1052 },      // xyz , y = x/z
        {13, 39, 351, 170901, 141435801 },// xyz , the follow number is xyz*yz
        {101, 313, 535, 757, 979 }        // xyz , x & y & z ++2
    };

    //loop to out the Questions for player
    for(int i=0; i<10 ; i++)
    {
       cout <<endl<<"Q"<<i+1<<" = "<<nums[i][0]<<" | "<<nums[i][1]<<" | "<<nums[i][2]<<
       " | "<<nums[i][3]<<" | "<< "??"<< endl<<"A : ";
       cin >> answers[i];
    }

    //loop to check answers of player
    for (int i=0; i<10 ; i++)
    {    
        if( answers[i] == nums[i][4])
            points++;
    }

    //End message and point count
    cout << "===============================\n";
    cout << "===>>> Finished The Game <<<===\n";
    cout << "===============================\n";
    cout << "===> Your points is " << points << " / 10 <===\n";
    cout << "===============================\n";
    
    return 0;
}