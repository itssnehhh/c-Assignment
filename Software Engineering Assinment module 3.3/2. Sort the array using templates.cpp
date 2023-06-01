//Program of to sort the array using templates.

#include<iostream>
using namespace std;

template<class value> //declaration of template class

void sorting(value arr)
{
    for( int i=0;i<5;i++)  //loops for sorting array in descending order
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[j]>arr[i])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"-------------------------------"<<endl; 
	cout<<"The Array in descending oeder is : "<<endl;
   
    for(int i=0;i<5;i++) //print array in descending order
    {
        cout<<" "<<arr[i];
    }
    
	cout<<endl<<"-------------------------------"<<endl;

    for(int i=0;i<5;i++) //loops array in ascending order
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    cout<<"The Array in ascending oeder is : "<<endl;
   
    for(int i=0;i<5;i++) //print array in ascending order
    {
        cout<<" "<<arr[i];
    }
    cout<<endl<<"-------------------------------"<<endl;
}

int main()
{
    int i,j,arr[5];//variables declared
    cout<<"Enter the elements of array => "<<endl;
    for(i=0;i<5;i++) //loop for take array elements from user
    {
        cin>>arr[i];
    }
    sorting(arr);
    
    return 0;
}
