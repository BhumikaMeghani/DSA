#include<iostream>

using namespace std;
const int m = 10;
class Mystack{
private:
int a[m];
int top;
public:
Mystack(){
    top = -1;
}
void push(int num);
void pop();
void display();
};
void Mystack :: push(int num){
    if (top == m-1){
        cout << " Stack is full !!" << endl;
    }
    else{
        top ++;
        a[top]=num;
    }
}
void Mystack :: pop(){
    if (top == -1){
        cout << "Stack is empty !!"<< endl;
    }
    else{
        cout << "Pop element : " << a[top] << endl;
        top --;
    }
}
void Mystack :: display(){
    if (top == -1){
        cout << "Stack is empty !!" << endl;
    }
    else{
        cout << "Elements in stack are : " << endl;
        for (int  i = top; i >=0; i--){
            cout << a[i] << endl;
        }
        cout << endl;
    }
}
int main(){
    Mystack s;
    int num;
    int ch;
    do{
        cout << "======== STACK MENU ======== "<< endl;
        cout <<"Press 1 for push"<< endl;
        cout <<"Press 2 for pop" << endl;
        cout <<"Press 3 for display"<< endl;
        cout <<"Press 4 for exit"<< endl;
        cout << "Enter your choice : ";
        cin>>ch;
        switch (ch)
        {
        case(1):
           cout << "Enter number to push : ";
           cin>>num;
           s.push(num);
            break;
        case (2):
           s.pop();
           break;
        case (3):
           s.display();
           break;
        case (4):
        cout <<" Exiting Programm " << endl;
        exit(0);
       
        default:
            cout << "Invalid choice !! " << endl;
            break;
        }
    }while(1);
    return 0;
}