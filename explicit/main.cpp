#include<iostream>
using namespace std;
class Entity
{
private:
    string m_Name;
    int m_Age;
public:
    Entity(const string& name): m_Name(name),m_Age(-1){}
    explicit Entity(int age): m_Name("Unknown"),m_Age(age){}
    void PrintInformation()
    {
        cout<<m_Name<<endl;
        cout<<m_Age<<endl;
    }
};
int main()
{
    Entity
}