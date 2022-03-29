#include<iostream>
using namespace std;
class student
{
    int s1;
    int s2;
public:
    int getdata(int x,int y);
    student sum(student p,student q);
    student disp(student m);

};
int main()
{
    student r,s,t;
    r.getdata(10,100);
    s.getdata(20,200);
    t=t.sum(r,s);
    t.disp(t);
}
int student :: getdata(int x,int y)
{
    s1=x;
    s2=y;
}
student student :: sum(student p,student q)
{
    student l;
    l.s1=p.s1+q.s1;
    l.s2=p.s2+q.s2;
    return(l);
}
student student :: disp( student m)
{
    cout<<s1;
    cout<<"\n";
    cout<<s2;
}
