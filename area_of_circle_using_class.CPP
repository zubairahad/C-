#include<iostream>
using namespace std;

 class area
 {
 public:
    float are(int r,float p=3.14)
    {
        float a;
        a=r*r*p;
        cout<<"area of circle is"<<a;
    }
 };
 int main()
 {
     area p;
     int rd;
     cout<<"enter the radius";
     cin>>rd;
     p.are(rd);
 }
