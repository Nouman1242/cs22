#include<iostream>
using namespace std;
main()
{
int number;
cout<<"Enter four digit number:";
cin>>number;
int result1;
int result2;
int result3;
int result4;
result1= number % 10;
int ans1; 
ans1=number/10;
int ans2;
ans2= ans1/10;
result2= ans1 % 10;
int ans3;
ans3= ans2/10;
result3= ans2 % 10;
int ans4;
ans4=ans3/10;
result4= ans3 % 10;
float output;
output= result1+result2+result3+result4;
cout<<"Output is:"<<output;
}