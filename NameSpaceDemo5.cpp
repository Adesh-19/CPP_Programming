#include<iostream>
using namespace std;

namespace Marvellous
{
    int i = 11;

    void Display()
    {
        cout<<"Inside Display of Marvellous\n";
    }
}

namespace PPA
{
    int i = 21;

    void Display()
    {
        cout<<"Inside Display of PPA\n";
    }
}

int main()
{
    Marvellous::i;
    Marvellous::Display();
    PPA::i;
    PPA::Display();

    return 0;
}

