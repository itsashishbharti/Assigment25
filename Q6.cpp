#include<iostream>
using namespace std;    
class Square
{
    static int count;
    int n,sq;
    public:
    Square(int x)
    {
        n=x;
       
    }
    void find()
    {
        count++;
        sq=n*n;
         cout<<"Square = "<<sq<<endl;
    }
    void print()
    {
        cout<<"Value of Count "<<count<<endl;
    }
};
int Square::count=0;
int main()
{
    Square s(5);
    Square g(6);
    Square d(2);
    s.find();
    g.find();
    d.find();
    s.print();
    return 0;
}