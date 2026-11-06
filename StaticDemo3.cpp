#include<iostream>
using namespace std;

class Demo
{

    public:
        int No1;
        int No2;
        static int X;

        Demo(int i,int j)
        {
            cout<<"Inside constructor:\n";
            No1 = i;
            No2 = j;
        }

        void fun()
        {
            cout<<"Inside fun:\n";
            cout<<No1<<"\n";
            cout<<No2<<"\n";
            cout<<X<<"\n";     
        }

        static void gun()
        {
            cout<<"Inside gun:\n";
            cout<<X<<"\n";     
        }

};

int Demo :: X = 11;

int main()
{

    cout<<Demo::X<<"\n";
    
    Demo::gun();
    
    Demo dobj1(10,20);
    Demo dobj2(30,40);

    dobj1.fun();
    dobj2.fun();




    return 0;
}