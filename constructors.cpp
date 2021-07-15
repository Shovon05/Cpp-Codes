#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length,breadth;

    public:
    Rectangle ()
    {
        length=0;
        breadth=0;
    }

    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }

    int  area()
    {
        return length*breadth;
    }
};
int main()
{
    Rectangle r1;
    cout<<r1.area();
}