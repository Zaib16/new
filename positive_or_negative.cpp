#include<iostream>
using namespace std;
main()
{
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    if(num>0)
    {
        cout<<"the number is positive"<<endl;

    }
    else if(num<0)
    {
        cout<<"the number is negative"<<endl;
    }
    else
    {
        cout<<"the number is zero"<<endl;
    }
}