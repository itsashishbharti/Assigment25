#include<iostream>
using namespace std;
class area
{
    float result,a,b;
    public:
    area(float x,float y=5)
    {
        a=x;
        b=y;
    }
    void calS()
    {
        result=a*a;
         cout<<"Area Of Square="<<result<<endl;
    }
    void calre()
    {
        result=a*b;
        
        cout<<"Area of Rectangle="<<result<<endl;
    }
    void calc()
    {
        result=(3.14*(a*a));
        cout<<"Area Of Circle="<<result<<endl;
    }
    void print()
    {
       
        
    }
};
int main()
{
    area a(4);
    a.calS();
    a.calre();
    a.calc();
   // a.print();
    return 0;

}