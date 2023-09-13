#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter first number: "<< endl;
    cin>> a;
    cout<<"Enter second number: "<< endl;
    cin>> b;

    char expression = '+','-','*','/';

    switch (expression)
    {
    case '+':
        cout<<"Sum of "<< a << "and "<< b << "are "<< a+b << endl 
        break;
        
    
    default:
        break;
    }

}
