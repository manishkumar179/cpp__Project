#include<iostream>
using namespace std;


class function{
    public:
    int radius,length,width;
    void area(int l, int b){
        length=l;
        width=b;
        cout<<"Area of rectangle= "<<length*width<<endl;
    }
    void area(int r){
        radius=r;
        cout<<"Area of circle= "<<3.14*r*r<<endl;
    }  
    void area(int b,float h){
        int base=b;
        int height=h;
        cout<<"Area of triangle+ "<<0.5*base*height;
    } 
};

int main(){
    function f1;
    f1.area(2,4);
    f1.area(4);
    f1.area(2,4);
    return 0;
}