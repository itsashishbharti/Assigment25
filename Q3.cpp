#include<iostream>
using namespace std;
class factorial
{
    int  num,fact=1;
    public:
    factorial(int n)
    {
        num=n;
    }
    void facto()
    {
        for(int i=1;i<=num;i++)
        {
            fact=fact*i;
        }
        cout<<"Factoial of "<<num<<"= "<<fact<<endl;
    }
   // void print()
   // {
   //     cout<<"Factoial of"<<num<<"= "<<fact<<endl;
   // }
};
int main()
{
    factorial f(5);
    f.facto();
    return 0;
}