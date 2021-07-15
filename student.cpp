#include<iostream>
using namespace std;

class Student
{
    private:
    int roll;
    string name; 
    int phyMark;
    int chemMark;
    int mathMark;

    public:
    Student(int r, string c,int x,int y,int z)
    {
        roll=r;
        name=c;
        phyMark=x;
        chemMark=y;
        mathMark=z;
    }

    int total()
    {
        return phyMark+chemMark+mathMark;
    }
    char grade();
};
int main()
{
    Student shovon(6,"shovon",60,50,80);
    
    cout<<shovon.total()<<endl;

}


