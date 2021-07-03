#include<iostream>

using namespace std;

class Arithmatic
{
    public:                     //access specifier
    int iNo1, iNo2;             //characteristics

    void Accept()               //Behaviour
    {
        cout<<"Enter first number\n";
        cin>>iNo1;
        cout<<"Enter second number\n";
        cin>>iNo2;
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
    Arithmatic obj1;             //Object creation
    Arithmatic obj2;
    
    obj1.Accept();
    iRet1 = obj1.Addition();
    cout<<"addition is :"<<iRet1<<"\n";

    obj2.Accept();
    iRet2 = obj2.Substraction();
    cout<<"substraction is :"<<iRet2<<"\n";

    return 0;    
}