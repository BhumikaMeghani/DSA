#include<iostream>
#include<cstdint>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int n=0;
        int num=x;
        int rem;
        if(x<0){
            return false;
        }
        while (num!=0){
            rem = num %10;
            if (n>INT32_MAX/10 || n==INT32_MAX/10 && rem>7){
                return false;
            }
            if (n<INT32_MIN/10 || n==INT32_MIN/10 && rem<-8){
                return false;
            }
            n=n*10+rem;
            num/=10;
        }
        if (n==x){
        return true;}
      
        else{
            return false;
        }
    }
};
int main(){
    Solution s;
    bool ans;
    int num;
    cout << "Enter number to  check if it's a palindrome : ";
    cin>> num;
    ans = s.isPalindrome(num);
    if(ans == true){
        cout << num << " is a Palindiome Number " << endl;
    }
    else{
        cout << num << " is not a Palindrome Number " << endl;
    }
    return 0;
}