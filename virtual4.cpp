#include<iostream>
using namespace std;
class Base
{
    public:
        int i,j,k;
       virtual void Fun()  //1000
        {
            cout<<"Inside Base fun\n";
        }
        virtual void Gun() //2000
        {
            cout<<"Inside Base gun\n";
        }
        void Sun()        // 3000
        {
            cout<<"Inside Base sun\n";
        }
        void Run()       // 4000
        {
            cout<<"Inside Base run\n";
        }

};

class Derived : public Base
{
    public:
        int a,b;
        virtual void Gun()  //5000
        {
        cout<<"Inside derived gun\n";
        }
        virtual void Run()  //6000
        {
            cout<<"Inside derived run\n";
        }
        virtual void Mun()  //7000
        {
            cout<<"Inside derived mun\n";
        }
};
int main()
{
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";
 Base *bp = new Derived;
 bp->Fun();
 bp->Gun();
 bp->Sun();
 bp->Run();
 // bp->Mun(); //NA Base kada definition vha nahi ye error
return 0;
}
