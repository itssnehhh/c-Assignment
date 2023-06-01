// Write a program to swap the two numbers using friend function without using third variable

#include<iostream>
using namespace std;

class swapping		//create class
{
    int a,b;
    friend void swap(swapping);		//create friend fucntion
};

void swap(swapping s)		//defination of the friend function
{
    cout<<"Enter the number A = ";
    cin>>s.a;
    cout<<"Enter the number B = ";
    cin>>s.b;
    
	cout<<"Before swapping A = "<<s.a<<endl;
    cout<<"Before swapping B = "<<s.b<<endl;
    
    cout<<"\n__Swapping__"<<endl;
    
	cout<<"After swapping A = "<<s.a*s.b/s.a<<endl;
    cout<<"After swapping B = "<<s.a*s.b/s.b<<endl;


}

int main()
{
    swapping Swapping;	//create object of class
    swap(Swapping);		//call friend function
    return 0;
}
