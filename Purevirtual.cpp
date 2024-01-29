#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;

        void fun()    // concrete method 1000
        {
            cout<<"Base fun\n"; 
        }
        virtual void gun()  // concrete method 2000
        {
            cout<<"Base gun\n";
        }
        // abstraction method ------
        virtual int Addition(int no1, int no2) = 0;  
};

class Derived : public Base
{
    public:
    int a,b;
    
    void gun()
    {
      cout<<"Derived gun\n"; // CM 3000
    }
    virtual void sun()
    {
        cout<<"derived sun\n"; // CM 4000
    }
    int Addition (int no1, int no2) // CM 5000
    {
        return no1 + no2;
    }
  

};
   
int main()
{
    

    Base *bp = new Derived;
    bp->fun();
    bp->gun();
    int Ret = 0;
    Ret = bp->Addition(10,11);
    cout<<"Addition is : "<<Ret<<"\n";
return 0;
}
