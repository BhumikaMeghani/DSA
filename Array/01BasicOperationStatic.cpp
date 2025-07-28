#include<iostream>
using namespace std;
/*Basic Array operation*/
const int maxs = 50;
class myarr{
 private:
 int a[maxs];
 int size;
 public:
 void inp(){
   cout << "Enter size of array : " << endl;
   cin>>size;
    cout << "Enter " << size << "elements :"<< endl;
    for (int i =0 ; i<size ; i++){
        cin>>a[i];
    }
 }
 void out(){
    cout << "Elements in array are : " << endl;
    for (int  i= 0 ; i<size ; i++){
        cout << a[i] << "\t";
    }
    cout<<endl;
 }
 void max(){
    int m=a[0];
    for (int i = 1 ; i<size ; i++){
    if (a[i]>m){
        m=a[i];
    }
    }
    cout << " Maximum element : " << m << endl;
 }
 void min (){
    int mn = a[0];
    for (int i =0 ; i<size ; i++){
     if (a[i] < mn ){
        mn = a[i];
     }
   
    }
      cout << "Minimum element : " << mn << endl;
 }
 void search (int s){
    
    int index;
    int flag = 0;
   
    for (int i = 0 ; i<size ; i++){
        if (s == a[i]){
           flag = 1;
           index = i;
           break;
        }
      
    }
    if (flag ==1){
   cout << s << " is present at " << index + 1 << endl;
   
    }
    else{
         cout << s << " is not present" << endl;
    }
 }
 void insertionAtpos(int num , int pos){
   if (pos<0 || pos>size){
      cout << "Invalid position !! " << endl;
   }
   else{
      for (int i=size ; i>pos ; i--){
         a[i] = a[i-1];
      }
      a[pos] = num ;
      size ++;
      cout << "Element Inserted Succesfully !!" << endl;
   }
 }
 void deleteElement(int numdel){
   int flag =0;
   int index;
   for (int i = 0 ; i<size ; i++){
      if (a[i] == numdel){
         flag = 1;
         index =i;
         break; 
      }
      
   }
   if (flag == 1 ){
   for (int i =index ; i<size ; i++){
      a[i]=a[i+1];
   }
   size --;
   cout << "Element Deleted Successfully !!" << endl;
   }
   else{
         cout <<"Element is not present in array !!" << endl;
      }
 }
 void sortasc(){
   int t;
   
   for (int i =0 ; i<size -1 ; i++){
      for (int j=0 ; j<size - i - 1 ; j++){    //size - i - 1
         if (a[j]>a[j+1]){
           t=a[j];
           a[j]=a[j+1];
           a[j+1]=t;
         }
      }
   }
   cout << "Sorted Succesfully !! " << endl;
 }
};
int main(){
myarr a;
int num , nump , pos , numd,s;
    int ch;
    do{
        cout << "======== STACK MENU ======== "<< endl;
        cout <<"Press 1 for input"<< endl;
        cout <<"Press 2 for output " << endl;
        cout <<"Press 3 for Max element"<< endl;
        cout <<"Press 4 for Min element"<< endl;
        cout <<"Press 5 for Search element"<< endl;
        cout <<"Press 6 for Insrting element at position"<< endl;
        cout <<"Press 7 for Deleting element"<< endl;
        cout <<"Press 8 for Sorting elements in ascending order"<< endl;
        cout <<"Press 9 for exit"<< endl;
        cout << "Enter your choice : ";
        cin>>ch;
        switch (ch)
        {
        case(1):
           
         a.inp();
            break;
        case (2):
           a.out();
           break;
        case (3):
           a.max();
           break;
         case (4):
           a.min();
           break;
         case (5):
          cout << " Enter element to search : ";
          cin>> s;
           a.search(s);
           break;
         case (6):
         cout << "Enter the element : ";
         cin >> nump;
         cout << " Enter the postion : ";
         cin>>pos;
           a.insertionAtpos(nump , pos);
           break;
         case (7):
         cout<<"Enter element to delete : ";
         cin>>numd;
           a.deleteElement(numd);
           break;
         case (8):
           a.sortasc();
           break;
        case (9):
        cout <<" Exiting Programm " << endl;
        exit(0);
       
        default:
            cout << "Invalid choice !! " << endl;
            break;
        }
    }while(1);
return 0;
}