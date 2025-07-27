#include <iostream>
using namespace std;
class Myarray{
private : 
int *arr;
int size;
public:
 Myarray(){
    cout << "Enter size : ";
    cin>>size;
    arr = new int[size];
 }
 void inp(){
    cout << "Enter "<< size << " elements : ";
    for (int i = 0 ; i<size ; i++){
        cin>>arr[i];
    }
 }
 void out(){
    cout << "Elements in array are : " << endl;
    for (int i=0 ; i <size ; i++){
    cout << arr[i] << " " ;
    }
    cout<<endl;
 }
 void max(){
    int m=arr[0];
    for (int i=1 ; i<size ; i++){
        if (arr[i]>m){
            m=arr[i];
        }
    }
    cout << "Maximum element : " << m << endl;
 }
 void min(){
    int mn = arr[0];
    for (int i = 1 ; i<size ; i++){
        if (arr[i]<mn){
            mn = arr[i];
        }
    }
     cout << "Minimum element : "<< mn << endl;
 }
 void search(){
    int s;
    int flag=0;
    int index;
    cout << "Enter element to search : ";
    cin>>s;
    for (int i=0 ; i<size ; i++){
        if (arr[i]==s){
            flag=1;
            index = i;
            break;
        }
    }
    if (flag==1){
        cout << "Element " << s <<" is present at position " << index +1<< endl;
    }
    else{
        cout << "Element "<< s << " is not present "<< endl;
    }
 }
 void insertion(int num , int pos){
    if (pos < 0 || pos >size){
        cout << " Invalis position ! " << endl;
    }
    else{
        for (int i = size ; i>pos ; i++){
            
        }
    }
 }

 ~Myarray(){
    cout <<"Object and array is destructed"<<endl;
    delete []arr;
 }
};
int main(){
    Myarray a;
    a.inp();
    a.out();
    a.min();
    a.max();
    a.search();
    return 0;
}