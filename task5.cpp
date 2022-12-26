#include<iostream>
using namespace std;
main()
{
float matric_marks;
float intermediate_marks;
string name;
float aggregate;
float ecat_marks;
cout<<"Enter name:";
cin>>name;
cout<<"Enter matric marks:";
cin>>matric_marks;
cout<<"Enter inter marks:";
cin>>intermediate_marks;
cout<<"Enter ecat marks:";
cin>>ecat_marks;
aggregate= (10 * matric_marks/1100) + (40 * intermediate_marks/520) + ( 50 * ecat_marks/400);
cout<<"Aggregate:"<<aggregate;
}