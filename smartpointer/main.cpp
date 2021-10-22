#include<iostream>
using namespace std;
class Entity
{
public:
    Entity()
    {
        cout<<"Created Entity"<<endl;
    }
    ~Entity()
    {
        cout<<"Destroyed Entity"<<endl;
    }
};
int* CreateArray()
{
    int* array = new int[50];
    return array;
}
class ScopedPtr
{
private:
    Entity* m_ptr;
public:
    ScopedPtr(Entity* ptr):m_ptr(ptr){}
    ~ScopedPtr()
    {
        delete m_ptr;
    }
};
int main()
{
    {
    Entity e;
    }
    {
        Entity* e1 = new Entity();
    }
    {
        ScopedPtr e2 = new Entity();
    }
    return 0;
}
