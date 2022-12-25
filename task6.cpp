#include<iostream>
using namespace std;
main()
{
float size_of_bag;
int cost_of_bag;
float area;
cout<<"Enter the size of bag in pounds:";
cin>> size_of_bag;
cout<<"Enter cost of bag:";
cin>>cost_of_bag;
cout<<"Enter area covered by each fertilizer in sq.feet:";
cin>>area;
float cost_per_pound;
float cost_of_fertilization;
cost_per_pound= cost_of_bag / size_of_bag;
cost_of_fertilization= area*size_of_bag;
cout<<"The cost of fertilizer per pound:"<<cost_per_pound;
cout<<endl;
cout<<"The cost of fertilizing the area per square feet:"<<cost_of_fertilization;
}