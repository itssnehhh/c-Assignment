// Write a program to find the max number from given two numbers using friend function

#include<iostream>
using namespace std;
class B;

class A  //declare class
{
    int a;
    public:
    void getdata()//create a fucntion
    {
        cout<<"Enter the number of a :- ";//take value from user
        cin>>a;
    }
    friend void max(A,B);//create friend fucntion
};

class B
{
    int b;
    public:
    void getdata2()
    {
        cout<<"Enter the value of b :- ";
        cin>>b;
    }
    friend void max(A,B);//create frient function
};

void max(A aa,B bb)	//defination of friend function
{
    if(aa.a>bb.b)	//Condition to find max number 
    {
    cout<<"maximun = "<<aa.a;
    }
    else
    {
        cout<<"maximum = "<<bb.b;
    }
}

int main()
{
    A aa;			//create object of the function
    B bb;			//create object of the function
    aa.getdata();	//call function to take value from user
    bb.getdata2();	//call function to take value from user
    max(aa,bb);		//call friend function to find max number
    return 0;
}
