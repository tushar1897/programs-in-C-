#include<iostream>

using namespace std;

class Arithmatic
{
    public:                     //access specifier
    int iNo1, iNo2;             //characteristics

    Arithmatic(int x, int y)    //Constructor (parametrised constructor)
    {
        iNo1 = x;
        iNo2 = y;
    }

    int Addition()              //behaviour
    {
        int iResult = 0;
        iResult = iNo1 + iNo2;
        return iResult;
    }

    int Substraction()          //Behaviour
    {
        int iResult = 0;
        iResult = iNo1 - iNo2;
        return iResult;
    }
};

int main()
{
    int iRet1 = 0, iRet2 = 0;
    Arithmatic obj1(10,11);             //Object creation
    Arithmatic obj2(20,15);
    
    iRet1 = obj1.Addition();
    cout<<"addition is :"<<iRet1<<"\n";

    iRet2 = obj2.Substraction();
    cout<<"substraction is :"<<iRet2<<"\n";

    return 0;    
}