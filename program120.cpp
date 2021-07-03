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
    int iRet = 0;
    Arithmatic obj;             //Object creation

    obj.Accept();
    iRet = obj.Addition();
    cout<<"addition is :"<<iRet<<"\n";

    iRet = obj.Substraction();
    cout<<"substraction is :"<<iRet<<"\n";

    return 0;    
}