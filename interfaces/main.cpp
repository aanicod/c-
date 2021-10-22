#include<iostream>
using namespace std;
class Playable
{
public:
    virtual string GetClassName()=0;
    
};
class Entity:public Playable
{
private:
    string m_Name;
public:
    string GetClassName() override
    {
        return "Entity";
    }
};
class Player:public Entity
{
private:
   string m_Name;
public:
   Player(const string& name):m_Name(name){}; 
   string GetClassName() override
   {
       return m_Name;
   }
};
void Print(Playable * obj)
{
    cout<<obj->GetClassName()<<endl;
}
int main()
{
    Entity * p = new Entity();
    Player * e = new Player("sachin");
    Print(p);
    Print(e);
    return 0;
}