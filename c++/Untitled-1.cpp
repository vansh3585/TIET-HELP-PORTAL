#include<iostream>
using namespace std;
class test{
    int a;
    public:
    test();
    void show()
    {
        cout<<"Default constructor is called"<<endl;
    cout<<a<<endl;
    }
};
test::test(){
    a=20;
    
}
int main()
{
    test t1=test();
    t1.show();return 0;
}