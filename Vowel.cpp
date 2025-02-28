#include<iostream>
using namespace std;

main(){
    char ch;
    cout<<"Enter character..";
    cin>>ch;
    cout<<endl;
    if(ch>='a'&&ch<='z' || ch>='A'&&ch<='Z')
        if (ch=='a'||ch=='e'||ch=='i'||ch=='u'||ch=='o'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            cout<<"Given character is a vowel";
        else
            cout<<"Given character is a ocnsonant";
    else if(ch>='0'&&ch<='9')
        cout<<"Given character is a digit";
    else
        cout<<"Given character is a speacial letter";    
}