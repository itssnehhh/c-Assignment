#include<iostream>
using namespace std;

class person // declaration of base class
{
    public:
    int age;
    string name;
    
	void persondetails()
	{
        cout<<"Enter your name :- "<<endl;
        cin>>name;
        cout<<"Enter you age :- "<<endl;
        cin>>age;
    }
    void printpersondetails()
	{
        cout<<"\n\nYour name is = "<<name<<endl;
        cout<<"Your age is = "<<age<<endl;
    }
};

class student //declaration of derive class
{
    public:
    double percentage;
    void personpercentage()
	{
        cout<<"Enter your percentage = "<<endl;
        cin>>percentage;
    }
    void printpercentage()
	{
        cout<<"Your percentage is = "<<percentage<<endl;
    }
};

class teacher :public person,public student //declaration of derive class
{
    public:
    int value;
    void salary()
	{
        cout<<"Enter your salary = "<<endl;
        cin>>value;
    }
    void printsalary()
	{
    cout<<"Your salary is = "<<value<<endl;
    }
};

int main()
{
    teacher Teacher;//give name to the class for calling funcation
    Teacher.persondetails();
    Teacher.personpercentage();
    Teacher.salary();
    Teacher.printpersondetails();
    Teacher.printpercentage();
    Teacher.printsalary();
    return 0;
}
