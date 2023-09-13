#include<iostream>
using namespace std;
int main()
{
    float a,b;
    char expression;
    cout<<"Enter first number: "<< endl;
    cin>> a;
    cout<<"Enter second number: "<< endl;
    cin>> b;
    cout<< "Enter expression " << endl;
    cin >> expression;
    
    switch (expression)
    {
    case '+':
        cout<<"Sum of "<< a << " and "<< b << " are "<< a + b << endl;
        break;
    case '-':
        cout<<"Substraction of "<< a << " and "<< b << " are "<< a - b << endl;
        break;    
    case '*':
        cout<<"Multiplication of "<< a << " and "<< b << " are "<< a * b << endl;
        break; 
    case '/':
        cout<<"Division of "<< a << " and "<< b << " are "<< a / b << endl;
        break;
    case '%':
        cout<<"Remainder of "<< a << " and "<< b << " are "<< a % b << endl; 
        break;   
    default:
        cout<< "Enter a valid expression" << endl;
        break;
    }
}
