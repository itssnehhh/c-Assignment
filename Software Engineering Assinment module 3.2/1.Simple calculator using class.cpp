//Simple calculator using class

#include<iostream>
using namespace std;

class calculator
{ //create class 
    public:
  
    int addition(int a,int b)  //function of addtion
    {
	return a+b;
    }
    
	int substraction(int a,int b) //function of substraction
    {
	    return a-b;
    }
    
	int multiplication(int a, int b) //function of multiplication
    {
	    return a*b;
    }
    
    int division(int a,int b) //function of division
    {
		return a/b;
    }
};

int main()
{
    double num1,num2,add,sub,multi,div;  //declaration of variables
    char operation;
    
	cout<<"enter the frist number = ";  //take values from user
    cin>>num1;
    cout<<"enter the second number = ";
    cin>>num2;
    
    operation:
    cout<<"Enter the operation (+,-,/,*)"<<endl;
    cin>>operation;
    
	calculator calculator2; // give name to the class for calling in main function
    switch(operation) //declaration of switch case
    
	{
        case '+':
        add = calculator2.addition(num1,num2); //addition function call
        cout<<"Addition is = "<<add;
        break;
        
		case '-':
        sub = calculator2.substraction(num1,num2); //subtraction function call
        cout<<"Subtraction = "<<sub;
        break;
        
        case '*':
        multi = calculator2.multiplication(num1,num2); // multiplication funcation call
        cout<<"Multiplication is = "<<multi;
        break;
        
        case '/':
        div = calculator2.division(num1,num2);// division fucntion call
        cout<<"Division is = "<<div;
        break;
        
        default:
        cout<<"Please enter valid operation"<<endl;
        goto operation; //if user enter invalid operation then they will again redirect on selection of operation
    }

    return 0;
}
