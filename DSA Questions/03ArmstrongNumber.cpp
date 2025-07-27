/*You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.
An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.
0 <= n <= 5000*/
#include<cmath>
#include<iostream>
using namespace std;
class Solution {
public:
    bool isArmstrong(int n) {
    if (n<0 || n>5000){
        return false;
    }
    int count=0,rem;
    int sum =0;
    int num=n;
    
    while(num!=0){
        num=num/10;
        count++; //we get number of digits
    }
    num=n;
    while(num!=0){
        rem = num %10;
        sum = sum+pow(rem,count);
        num=num/10;
    }
    if (sum == n){
        return true;
    }
    else {
        return false;
    }
    }
};
int main(){
    Solution s;
    bool ans;
    int num;
    cout << "Enter number : ";
    cin>>num;
    ans =s.isArmstrong(num);
    if (ans==true){
        cout << "Yes" << num << " is armstrong!" << endl;
    }
    else{
        cout << " No " << num << " is not an armstrong !"<< endl;
    }
    return 0;
}