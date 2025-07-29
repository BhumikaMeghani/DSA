#include<iostream>
using namespace std;
struct dataq{
    int item;
    int priority;
};
const int maxs = 10;
class pqueue{
    dataq d[maxs];
    int front , rear;
    public:
    pqueue(){
      front = -1;
      rear = -1;
    }
    void add(dataq dt){
      if (rear == maxs -1){
        cout << "Queue is full " << endl;
      } 
      else{
        rear ++;
        d[rear].item=dt.item;
        d[rear].priority=dt.priority;
        if (front == -1){
          front =0;
        }
      if (rear>0){
       sort();
      }
      }
    }
    void remove(){
      if (front == -1){
        cout << "Queue is empty " << endl;
      }
      else{
       cout << " Removed element : " << d[front].item << " and its priority is : " << d[front].priority << endl;
      if (front == rear ){
        front = rear = -1;
      }
      else{
        front ++;
      }
      }
    }
    void sort (){
      dataq t;
      for (int i = front ; i<rear ; i++){
        for (int j=front ; j<rear - (i -front) ; j++){
        if (d[j].priority>d[j+1].priority){
         t=d[j];
         d[j]=d[j+1];
         d[j+1]=t;
        }
        }
      }
    }
    void display(){
      if (front ==-1){
        cout << "Queue is empty "<< endl;
      }
      else{
        cout << " Elements in queue are : "<< endl;
        for (int i=front ; i<=rear ; i++){
          cout <<"Item : " << d[i].item << " "<< "Priority : " << d[i].priority << endl;
        }
        cout <<endl;
      }
    }
};
int main(){
  pqueue p;
  dataq d;
  int ch;
  do{
    cout << "Press 1 for add" << endl;
    cout << "press 2 for remove" << endl;
    cout << "press 3 for display"<< endl;
    cout << "Press 4 for exit : " << endl;
    cout << "Enter your choice : "<< endl;
    cin>>ch;
    switch(ch){
      case 1:
      cout << "Enter item : ";
      cin>>d.item;
      cout << "Enter priority : ";
      cin>>d.priority;
      p.add(d);
      break;

      case 2:
      p.remove();
      break;
      
      case 3:
      p.display();
      break;

      case 4:
      exit(0);

      default:
      cout << "Invalid choice !"<< endl;
      break;

    }
  }while(1);
  return 0;
}