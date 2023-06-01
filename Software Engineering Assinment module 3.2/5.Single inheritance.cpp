//Single Inheritance

#include<iostream>
using namespace std;

class cricketer //declaration of base class
{  
    protected:
        string name; //declaratio of variables for write a name
        public:
        void cricketername(string name1) //declare function 
        {
		    name=name1;
            cout<<"Name is :- "<<name1<<endl; //print name
        }
};

class batsman: public cricketer //declaration of derived class and inheritate base class in derived class
{
    int totalruns,bestperformance;
    float averageruns;
    public:
    void information(int total, float average,int bestperformance1) //function declare
    { 
	    totalruns = total;
        bestperformance = bestperformance1;
        averageruns = average;
    }
    void printinformation(){ //printf function data
        cout<<"Total runs = "<<totalruns<<endl;
        cout<<"Avarage runs = "<<averageruns<<endl;
        cout<<"Best performance = "<<bestperformance<<endl;
    }

};

int main()
{
    batsman Batsman; 								//give name to the class
    Batsman.cricketername("Mahendra Singh Dhoni");  //call function
    Batsman.information(19223,83.3,183);			// call function
    Batsman.printinformation();						// call function for print data
    return 0;
}
