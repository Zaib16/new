#include<iostream>
using namespace std;
int main ()
{
//    ******** by while loop******
//     int num, temp,r, rev = 0;
//     cout << "Enter a number : ";
//     cin >> num;
//     temp = num;
//     while (temp != 0)
//     {
//        int r = temp % 10;
//         rev = rev * 10 + r;
//         temp /= 10;
//     }
//     cout << "\nThe reverse of " << num << " is : " << rev;
    
    
    
    int num, rev = 0;
    cout << "Enter a number : ";
    cin >> num;
    for (int temp = num; temp != 0; temp /= 10)
    {
        int r = temp % 10;
        rev = rev * 10 + r;
    }
    cout << "\nThe reverse of " << num << " is : " << rev;
    return 0;

}