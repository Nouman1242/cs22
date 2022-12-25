#include<iostream>
using namespace std;
main()
{
string name;
cout<<"Enter movie name:";
cin>>name;
int adult_price;
int child_price;
int adult_sold;
int child_sold;
float percentage;
cout<<"Enter the price of adult ticket:";
cin>>adult_price;
cout<<"Enter the price of child ticket:";
cin>>child_price;
cout<<"Enter numeber of adults ticket sold:";
cin>>adult_sold;
cout<<"Enter numeber of child ticket sold:";
cin>>child_sold;
cout<<"Enter amount of percentage:";
cin>>percentage;
int total_amount;
int left_amount;
total_amount= (adult_price*adult_sold)+(child_price*child_sold);
cout<<"The total amount generated:"<<total_amount;
cout<<endl;
left_amount=total_amount-(total_amount/100)*percentage ;
cout<<"The amount left after deuction:"<<left_amount;
}