// Write a program to concatenate the two strings using Operator Overloading

#include<iostream>
using namespace std;

class concatenate 	//declaration of class
{
    private:
    string a,b,c; 		//declared variables to store string 
    public:
    void inputdata()	//declared finction to take value from user
    {
    cout<<"Enter your Fristname = ";
    cin>>a;
    cout<<"Enter your Lastname = ";
    cin>>b;
    }
    
    void print();		//function to print all values
    void operator+();	//finction to merge two string
};

void concatenate::operator+()	//defination of the opertor function
{
    c = a + b;		//merged two string
}

void concatenate::print()		//defination of the print funtion to print all values
{
    cout<<"Your full name is :- "<<c<<endl;
}

int main()
{
    concatenate Concatenate;	//create aject of the class
    Concatenate.inputdata();	//call function to take value from user
    +Concatenate;				//call operator fucntion
    Concatenate.print();		//call print fucntion to print merged string 
    
    return 0;
}
