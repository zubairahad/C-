#include<iostream>
using namespace std;
class object {
 int s1;
 int s2;
 public:
     int getdata(int x,int y)
     {
         s1=x;
         s2=y;
     }
    object total(object p)
    {
        int z;
        z=s1+s2;
        cout<<"the sum is "<<z;
    }

};
int main()
{
    object q;
    q.getdata(100,200);
    q.total(q);
}
