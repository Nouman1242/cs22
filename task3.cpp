#include<iostream>
using namespace std;
main()
{
float initial_velocity;
float acceleration;
int time;
float final_velocity;
cout<<"Enter initila velocity:";
cin>>initial_velocity;
cout<<"Enter acceleration:";
cin>>acceleration;
cout<<"Enter time:";
cin>>time;
final_velocity= (acceleration * time) +initial_velocity;
cout<<"Final velocity:"<<final_velocity;
}