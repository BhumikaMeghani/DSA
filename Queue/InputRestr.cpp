#include <iostream>
using namespace std;
const int maxs=50;
class queue{
int q[maxs];
int front , rear;
public:
 queue(){
    front = -1;
    rear = -1;
 }
 void add(int num){
    if (rear == maxs - 1){
        cout << "Queue is full !" << endl;
    }
    else{
        rear++;
        q[rear]=num;
        if (front == -1){
            front++;
        }
    }
 }
 void delfront(){
  if (front == -1){
    cout << "Queue is empty !" << endl;
  }
  else{
    cout<<"Deleted element : " << q[front]<< endl;
    if (front == rear){
        front = rear =-1;
    }
    else {
        front++;
    }
  }
 }
  void delrear(){
    if (front == -1){
        cout << "Queue is empty !"<< endl;
    }
    else{
        cout << "Deleted element : " << q[rear]<< endl;
        if (front == rear ){
            front= rear =-1;
        }
        else{
            rear--;
        }
    }
 }
 void display(){
    if (front ==-1){
        cout << "Queue is empty "<< endl;
    }
    else{
        cout << "Elements in queue are : " << endl;
        for (int i = front ; i<=rear; i++){
            cout << q[i] << " ";
        }
        cout << endl;
    }
 }

};
int main(){
    queue q;
    int num , ch;
    do{
        cout << "Press 1 for insertion"<< endl;
        cout <<"Press 2 for delete from front"<< endl;
        cout << "Press 3 for delete from rear"<< endl;
        cout << "Press 4 for display"<< endl;
        cout << "Press 5 for exit"<< endl;
        cout <<"Enter your choice : ";
        cin>>ch;
        switch (ch)
        {
        case 1:
        cout << "Enter element : ";
        cin>>num;
        q.add(num);
        break;
        
        case 2:
        q.delfront();
        break;
        
        case 3:
        q.delrear();
        break;

        case 4:
        q.display();
        break;
        
        case 5:
        exit(0);

        default:
        cout << "Invalid choice !!"<< endl;
        break;
        }
    }while(1);
    return 0;
}