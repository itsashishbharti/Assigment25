#include<iostream>
using namespace std;
class Time
{
    int hour,min,sec;
    public:
    //setter
    void sethour(int h)
    {
        hour=h;
    }
     void setmin(int m)
    {
        min=m;
    }
     void setsec(int s)
    {
        sec=s;
    }
    int  gethour()
    {
        return hour;
    }
    int getmin()
    {
        return min;
    }
    int getsec()
    {
        return sec;
    }

};
int main()
{
    Time obj;
    obj.sethour(2);
    obj.setmin(10);
    obj.setsec(45);
    cout<<"Time="<<obj.gethour()<<":"<<obj.getmin()<<":"<<obj.getsec()<<endl;
    return 0;
}
