#include <iostream>
using namespace std;
class Entity
{
public:
    virtual string GetName()
    {
        return "Entity";
    }
};
class inh: public Entity
{
private:
     string m_class;
public:
    inh(const string& name): m_class(name){}
    string GetName() override
    {
        return m_class;
    } 
};
void PrintName(Entity* entity)
{
    cout<<entity->GetName()<<endl;
}
int main()
{
    Entity* e = new Entity();
    PrintName(e);
    inh * p = new inh("sachin");
    PrintName(p);
    return 0;
    
}