#include<iostream>
using namespace std;

class A{
    public:
    int a,b;

    void show(){
        cout<<"enter two numbers:";
        cin>>a>>b;

        cout<<"the two numbers are"<<" = "<<a<<" "<<b;

    }
};
A obj;

int main(){
    obj.show();
    return 0;
    
}