#include<iostream>
using namespace std;

class student // class declaration
{
    public:
    int rollnumber;
    void roll()
	{
        cout<<"Enter your roll number :- ";
        cin>>rollnumber;
    }
    void printroll()
	{
        cout<<"Your roll number is :- "<<rollnumber<<endl;
    }
};

class test:public student //inharite base class in derive class
{
	public:
    float math,sci;
    void marks()
	{
        cout<<"enter the marks of Mathematics = ";
        cin>>math;
        cout<<"enter the marks of Science = ";
        cin>>sci;
    }
    void printmarks()
	{
        cout<<"Your marks in Mathematics = "<<math<<endl;
        cout<<"Your marks in Science = "<<sci<<endl;
    }
};

class contains:public test// inherite derive class 
{
    public:
    void total()
    {
        cout<<"Your total marks = "<<math+sci<<endl;
    }
};

int main()
{
    contains Contains;
    Contains.roll();
    Contains.marks();
    Contains.printroll();
    Contains.printmarks();
    Contains.total();
    return 0;
}
