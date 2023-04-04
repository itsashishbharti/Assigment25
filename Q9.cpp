#include<iostream>
using namespace std;
class circle

{
    float area, r;
    public:
    circle(float x)
    {
        r=x;
    }
    void calculate()
    {
        area=(3.14*(r*r));
    }
    void print()
    {
        cout<<"Area Of Circle ="<<area<<endl;
    }
};
int main()
{
    circle c(4);
    c.calculate();
    c.print();
    return 0;
}