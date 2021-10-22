#include<iostream>
using namespace std;
class Example
{
public:
    Example()
    {
        cout<<"created entity"<<endl;
    }
    Example(int x)
    {
        cout<<"created entity"<<x<<"!"<<endl;
    }
};
class Entity
{
private:
    string m_Name;
    int m_Score;
    Example m_Example;
public:
    Entity():
    m_Name("Unknown"),m_Score(0),m_Example(8)
    {
        cout<<"Initialized without parameter"<<endl;
    }
    Entity(const string& name):m_Name(name),m_Example(){}
    const string& GetName() const
    {
        return m_Name;
    }
};
int main()
{
    Entity e;
    cout<<e.GetName()<<endl;
    Entity e1("Rahul")
    return 0;
}