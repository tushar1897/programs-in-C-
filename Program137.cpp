#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
// #include<io.h>
using namespace std;
// O_RDONLY         Read
// O_WRONLY        Write
// O_RDWR           Read & Write
// O_CREAT           Create new file
// User

class FileX
{
public:
    int fd;
    
    FileX(char Name[])  // FileX(char * Name)
    {
        fd = creat(Name,0777);
        if(fd == -1)
        {   cout<<"Unable to create file\n";}
        else
        {cout<<"File succesfully created..\n";}
    }
    ~FileX()
    {
        close(fd);
    }
};
int main()
{
    char str[30];           // 100
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);     // Filex obj(100)
    return 0;
}






























