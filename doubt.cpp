#include<iostream>

using namespace std;

class student

{

    string a;

    string b;

    public:

    void getsetdata(string a1,string a2)

    {

        a=a1;

        b=a2;

        cout<<"the name of the student is"<<a<<endl;

        cout<<"the address of the student is "<<b<<endl;

    }

 

};

int main()

{

    student s1;

    s1.getsetdata("john","nashik");

    return 0;

}