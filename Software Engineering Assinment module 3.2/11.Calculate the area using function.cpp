// Write a program to calculate the area of circle, rectangle and triangle using Function Overloading

#include<iostream>
using namespace std;

double area(double radius)
{
    return 3.14*radius*radius;
}

double area(double length,double width)
{
    return length*width;
}

double area(double base,double height,double value)
{
    return base*height*value;
}

int main()
{
   
    cout<<"\n\n-----Aream of Circle-----"<<endl;
    
	double radius;
    cout<<"Enter the radius of the circle = ";
    cin>>radius;
    cout<<"Area of the circle is = "<<area(radius)<<endl;
    cout<<"-------------------------"<<endl;


    cout<<"\n\n-----Area of the Rectangle-----"<<endl;

    double length,width;
    cout<<"Enter the length of the rectangle = ";
    cin>>length;
    cout<<"Enter the width of the rectangle = ";
    cin>>width;
    cout<<"Area of the rectangle is = "<<area(length,width)<<endl;
    cout<<"-------------------------"<<endl;


    cout<<"\n\n-----Area of the Triangle-----"<<endl;
   
    double base,height,value=0.5;
    cout<<"Enter the base of the Triangle = ";
    cin>>base;
    cout<<"Enter the height of the Triangle = ";
    cin>>height;
    cout<<"Area of the Triangle is = "<<area(base,height,value)<<endl;
    return 0;

}
