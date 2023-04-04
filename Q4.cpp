#include<iostream>
using namespace std;


class large
{
    int a,b,c;
    public:
    large(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void find()
    {
        if(a>=b && a>=c)
        cout<<"Largest Number: "<<a<<endl;
         if(b>=a && b>=c)
        cout<<"Largest Number: "<<b<<endl;
         if(c>=a && c>=b)
        cout<<"Largest Number: "<<c<<endl;
    }
};
int main()
{
    large obj(8,33,2);
    obj.find();
    return 0;
}