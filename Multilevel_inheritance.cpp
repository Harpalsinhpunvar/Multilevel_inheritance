#include<iostream>
using namespace std;

class A
{
    public:
    void show()
    {
        cout<<"Class A - Base Class."<< endl << endl;
    }
};
class B : public A
{
    public:
        void show1()
        {
            cout << "Class B is Sub-Class of Class A."<< endl << endl;
        }

};
class C : public B
{
    public:
        void show2()
        {
            cout << "Class C is Sub-Class of Class B.\nTherefore, Class B is also Base class. "<< endl << endl;
        }

};
int main(){

    C c;
    c.show();
  

    B b;
    b.show1();

    c.show2();

   
    
return 0;
}