#include<iostream>
using namespace std;
class rectangle
{
    int area,h,w;
    public:
    rectangle(int a,int b)
    {
        h=a;
        w=b;
    }
    void calculate()
    {
        area=h*w;
    }
    void print()
    {
        cout<<"Area Of Rectangle="<<area<<endl;
    }
};
int main()
{
    rectangle r(5,3);
    r.calculate();
    r.print();
    return 0;
}