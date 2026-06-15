//Making the calculator
#include<iostream>
using namespace std;
class temp{
    public:
    int a,b,c;
    
    char op;
    void getv1();
    void getv2();
    void OP();
    void add();
    void sub();
    void mul();
    void div();


}obj;
int main(){
    obj.getv1();
    while(true){
    obj.OP();
    
    if(obj.op=='='){
        cout<<"\nFinal Answer = "<<obj.a<<endl;
        break;
        return 1;
    }
    obj.getv2();
    switch(obj.op){
        case '+':
        obj.add();
        break;
        case '-':
        obj.sub();
        break;
        case '*':
        obj.mul();
        break;
        case '/':
        obj.div();
        break;
        default:
        cout<<"Invalid Operator...."<<endl;
    }

  
}
return 0;
}

void temp :: getv1(){
    cout<<"\nEnter the value - ";
    cin>>a;
}
void temp :: getv2(){
    cout<<"\nEnter the second no - ";
    cin>>b;
}
void temp :: OP(){
    cout<<"\nEnter the operator > ";
    cin>>op;
}
void temp:: add(){
    cout<<"Addition of your numbers are"<<endl;
    c=a+b;
    cout<<c;
    a=c;
    b=0;
}
void temp :: sub(){
    cout<<"subtraction of your no is "<<endl;
    c=a-b;
    cout<<c;
    a=c;
    b=0;
}
void temp :: mul(){
    c=a*b;
    cout<<"Multiply of the given no is - "<<c<<endl;
    a=c;
    b=0;
}
void temp :: div(){
    c=a/b;
    cout<<"Division is "<<c<<endl;
    a=c;
    b=0;
}