#include <iostream>
#include <cstdint> 
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int n = 0;
        int rem;
        while (x != 0) {
            rem = x % 10;
            if (n>INT32_MAX/10 || n== INT32_MAX/10  && rem ==7){
                return 0;
            }
            if (n<INT32_MIN/10 || n==INT32_MIN/10 && rem==-8){
                return 0;
            }
            n = n * 10 + rem;
            x = x / 10;
        }
        return n;
    }
};
int main(){
    Solution s;
    int ans;
    int num;
    cout << "Enter number to reverse it : ";
    cin>>num;
    ans = s.reverse(num);
    cout << "Reverse of "<< num << " is " << ans << endl;
}