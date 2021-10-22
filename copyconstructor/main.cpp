#include<iostream>
using namespace std;
class A
{
private:
    int a;
public:
    int b;
    int variable;
    A(int b)
    {
        variable = b;
    }
    A(A &i)
    {
        variable = i.variable;
    }

};
int main()
{
    A s(20);
    A d(s);
    cout<<d.variable;
    return 0;
}