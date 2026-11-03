#include<iostream>
#pragma pack(1)
using namespace std;


class Demo
{
    
    int i;
    char ch;
    float f;


};

int main()
{
    
    Demo dobj;

    cout<<sizeof(dobj)<<"\n";

    return 0;
}