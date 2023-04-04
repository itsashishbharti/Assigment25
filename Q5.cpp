#include<iostream>
using namespace std;
 class rev
 {
    int n;
    public:
    rev(int x)
    {
        n=x;
    }
    void Reverse()
    {
        int r=n,st=0;
        while(n!=0)
        {
            
            st=st*10+n%10;;
            n=n/10;
            
        }
        cout<<"Reverse : "<<r<<"  is  "<<st<<endl;
    }
 };
 int main()
 {
    rev obj(1432);
    obj.Reverse();
    return 0;
 }