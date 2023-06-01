//Program to Mathematic operation (Addition,Subtraction,Multiplication,Division) of two number using different parameters and Function Overloading

#include<iostream>
using namespace std; 

double operation(double a,double b) //declration of addition function
{  
    return a+b;
}
double operation(double a,double b,double c) //declaration of substraction function
{
    return a-b-c;
}

double operation(double a,double b,double c, double d, double e ) // declaration of multiplication function
{
    return (a*b)*(c*d)*e;
}

double operation(double a,double b, double c, double d) // declaration of division finction
{    
	return (a*b)/(c*d);
}

int main()
{
    cout<<"Addition => "<<operation(10,20)<<endl; 				//call addition function  and pass argements
    cout<<"\nSubstraction => "<<operation(200,50,20)<<endl;		//call substract function and pass argements
    cout<<"\nMultiplication => "<<operation(10,5,2,7,5)<<endl;// call multiplication function and pass arguments 
    cout<<"\nDivision => "<<operation(10,5,10,2)<<endl;			// call division function and pass arguemnts
    return 0;
}
