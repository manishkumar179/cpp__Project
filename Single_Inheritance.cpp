#include<iostream>
using namespace std;

class single{
    public:
    int a,b;
    void get(){
        cout<<"Enter the value of a and b = ";
        cin>>a>>b;
    }
    };
    class single1:public single{
        public:
        int c;
        void perform(){
            c=a+b;
            cout<<"Addition of two number: "<<c;

        }
    };
    int main(){
        single1 obj;
        obj.get();
        obj.perform();
        return 0;
    }
