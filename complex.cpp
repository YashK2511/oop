#include<iostream>
using namespace std;
class Complex{
    int real;
    int imag;
    public:
    Complex(){
        real=0;
        imag=0;
    }
    Complex operator +(Complex& obj){
        Complex c;
        c.real=real+obj.real;
        c.imag=imag+obj.imag;
        return c;
    }
    Complex operator -(Complex& obj){
        Complex c;
        c.real=real-obj.real;
        c.imag=imag-obj.imag;
        return c;
    }
    Complex operator *(Complex& obj){
        Complex c;
        c.real=(real*obj.real)-(imag*obj.imag);
        c.imag=(real*obj.imag)+(imag*obj.real);
        return c;
    }
    friend istream& operator >>(istream& input,Complex& obj){
        cout<<"Enter the real part of the  complex number:";
        input>>obj.real;
        cout<<"Enter the imaginary part of the complex number:";
        input>>obj.imag;
        return input;
    }
    friend ostream& operator <<(ostream& out,Complex obj){
        out<<obj.real<<"+"<<obj.imag<<"i"<<endl;
        return out;
    }
};
int main(){
    Complex c1,c2;
    cout<<"Enter the first  complex number:-\n";
    cin>>c1;
    cout<<"Enter the second complex number:-\n";
    cin>>c2;
    cout<<"Addition of two complex number is:\n";
    Complex c3=c1+c2;
    cout<<c3;
    cout<<"Subtraction of two complex number is:\n";
    Complex c4=c1-c2;
    cout<<c4;
    cout<<"Multiplication of two complex numnber is:\n";
    Complex c5=c1*c2;
    cout<<c5;
    return 0;
}
