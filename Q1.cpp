#include<iostream>
using namespace std;
class complex
{
    int a;
    int b;
    public:
        complex(int x,int y)
        {
            a=x;
            b=y;
        }
        void print()
        {
            cout<<"Number="<<a<<" + "<<b<<"i"<<endl;
        }
};
int main()
{
    complex obj(2,3);
    obj.print();
    return 0;
}