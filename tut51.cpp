#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
            cout<<real<<"+"<<imaginary<<"i"<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};

// the '.' operator can be also writtern as a '->' without * in pointer
int main(){
    Complex *ptr = new Complex;
    // (*ptr).setData(1, 54);
    //is exactly same as
    ptr->setData(1, 54);
    (*ptr).getData();
    //is as good as 
    return 0;
}
