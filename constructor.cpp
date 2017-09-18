//constructor and destructor with derived class
#include<iostream>
using namespace std;
class A
{
public:
A()
{
cout<<"zero argument constructor of A";
cout<<endl;}
~A()
{
cout<<"destructor in A class";
cout<<endl;
}};
class B:public A
{
public:
/*B()
{
cout<<"zero argument of B "<<endl;}
~B()
{
cout<<"destructor of B"<<endl;}*/};
main()
{
B obj;}
