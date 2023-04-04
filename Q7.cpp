#include<iostream>
using namespace std;
class largestnum
{
    int large,a,b,c;
    public:
    largestnum(int x,int y,int z)
    {
       a=x;
        b=y;
        c=z;
    }
    void findlargestnum()
    {
        large=(a>b) ? (a>c?a:c):(b>c?b:c);
    }
    void print()
    {
        cout<<"Largest Number Is="<<large<<endl;
    }
};
int main()
{
    largestnum l(14,3,2);
    l.findlargestnum();
    l.print();
    return 0;
}