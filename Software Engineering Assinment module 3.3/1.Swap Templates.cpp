//Program of to swap the two values using templates

#include<iostream>
using namespace std;

template <class p>

int swapping(p *a,p *b)
{
    p temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a=10,b=20;
    
    cout<<"--Before Swapping--"<<endl;
    cout<<"The value of a is = "<<a<<endl;
    cout<<"The value of b is = "<<b<<endl;
    
	
	swapping(&a,&b);
    
	cout<<"\n\n--After Swapping--"<<endl;
	cout<<"The value of a is = "<<a<<endl;
    cout<<"The value of b is = "<<b<<endl;

    return 0;
}
