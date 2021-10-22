#include<iostream>
#include<memory>
using namespace std;
class Entity
{
public:
    Entity()
    {
        cout<<"created Entity"<<endl;
    }
    ~Entity()
    {
        cout<<"entity destroyed"<<endl;
    }
    void Print(){}
};
int main()
{
    {
        shared_ptr<Entity> e0;
        {
            unique_ptr<Entity>entity(new Entity());
            entity->Print();
            shared_ptr<Entity>sharedEntity=make_shared<Entity>();
            e0 = sharedEntity;
            weak_ptr<Entity> weakEntity = sharedEntity;
    
        }
        e0->Print();
    }
    return 0;
}
