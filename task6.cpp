#include<iostream>
using namespace std;
main()
{
float megabytes;
float bits;
cout<<"enter value(Mgbs):";
cin>>megabytes;
bits = megabytes *1024*1024*8;
cout<< "Bits:"<<bits;
}