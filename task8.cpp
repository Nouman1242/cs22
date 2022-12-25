#include<iostream>
using namespace std;
main()
{
float vegetable_price;
float fruit_price;
float vegetables_sold;
float fruits_sold;
cout<<"Enter price of vegetables per kg:";
cin>>vegetable_price;
cout<<"Enter price of fruits per kg:";
cin>>fruit_price;
cout<<"Enter amount of vegetables sold:";
cin>>vegetables_sold;
cout<<"Enter amount of fruits sold:";
cin>>fruits_sold;
float price1;
float price2;
price1=1.94 *(vegetable_price*vegetables_sold);
price2=1.94 *(fruit_price*fruits_sold);
float total;
total= price1+price2;
cout<<"total price:"<<total;
}