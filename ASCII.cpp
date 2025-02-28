#include<iostream>
#include<string>
using namespace std;

main(){
    string str;
    cout<<"Enter a string:";
    getline(cin,str);
    cout<<"ASCII value of each character:"<<endl;
    for (int i = 0 ; i<str.length(); i++)
    {
        cout<<"ASCII value of "<<str[i]<<"is"<<int(str[i])<<endl;
    }
    

}