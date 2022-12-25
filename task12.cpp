#include<iostream>
using namespace std;
main()
{
int number;
cout<<"Enter four digit number:";
cin>>number;
int position1;
int position2;
int position3;
int position4;
int result1;
int result2;
int result3;
int result4;
result1= number/10;
result2= result1/10;
result3=result2/10;
result4=result3/10;
position1= number%10;
position2= result1%10;
position3= result2%10;
position4= result3%10;
int ans1;
int ans2;
int final;
ans1= position1+position3;
ans2= position2*position4;
final= ans1+ans2;
cout<<"Result:"<<final;
}