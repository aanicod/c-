#include<iostream>
using namespace std;
template <typename T>
void Print(T value)
{
    cout << value;
}
/*
template<typename T,int N>
class Array
{
private:
    T m_array[N];
public:
    int Getsize() const {return N;}
};
*/
int main()
{
    Print<int>(5);
    Print(5);
    
}