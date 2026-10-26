#include<iostream>
using namespace std;
class Stream
{
    public:
             Stream()   {cout<<"stream ctor\n";}
             void open()  {cout<<"stream opened\n";}

             
};
class InStream:virtual public Stream {};
class OutStream:virtual public Stream{};
class IOStream:public InStream,public OutStream{};

int main()
{
    IOStream Io;
    Io.open();
    return 0;
    
}