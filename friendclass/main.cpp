#include<iostream>
using namespace std;
class A
{
private:
    int a;
public:
    A(){a=10;}
    friend class B;
};
class B
{
private:
    int b;
public:
    void show(A& x)
    {
        cout<<x.a;
    }
};
int main()
{
    A s;
    B t;
    t.show(s);
    return 0;
}
