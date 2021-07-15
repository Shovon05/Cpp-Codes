#include<iostream>
using namespace std;

class Rectangle
{
    private: 
    int length,breadth;

    public:
    int setLength(int l)
    {
        length=l;
    }
    int setBreadth(int b)
    {
        breadth=b;
    }

    int area()
    {
        return length*breadth;
    } 

};

int main() 
{
    Rectangle r1;
    r1.setLength(7);
    r1.setBreadth(5);
    cout<<r1.area(); 
}