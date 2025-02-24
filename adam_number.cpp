// Problem Description
// The program takes a number and checks if it is an Adam number. A number when squared, reversed, its root is found and is reversed again is equal to the original number, then it is called an Adam number.


#include<iostream>
#include<math.h>
using namespace std;

main(){
	int num, temp,r1,r2,sq,rev1=0,rev2=0;
	cout<<"enter a number"<<endl;
	cin>>num;
	temp=num*num;
	while(temp!=0){
		r1=temp%10;
		rev1=rev1*10+r1;
		temp/=10;
	}
	sq=sqrt(rev1);
	while(sq!=0){
		r2=sq%10;
		rev2=rev2*10+r2;
		sq/=10;
	}
	if(rev2==num)
	cout<<num<<"is an adam number";
	else
	cout<<num<<"is not an adam number";
	return 0;
}