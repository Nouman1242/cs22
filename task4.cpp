#include<iostream>
using namespace std;
main()
{
string name;
int subject1;
int subject2;
int subject3;
int subject4;
int subject5;
float percentage;
cout<<"Enter your name:";
cin>>name;
cout<<"Enter subject1 marks:";
cin>>subject1;
cout<<"Enter subject2 marks:";
cin>>subject2;
cout<<"Enter subject3 marks:";
cin>>subject3;
cout<<"Enter subject4 marks:";
cin>>subject4;
cout<<"Enter subject5 marks:";
cin>>subject5;
percentage= 100 * (subject1+subject2+subject3+subject4+subject5)/500;
cout<<"Your percentage is:"<<percentage;
}