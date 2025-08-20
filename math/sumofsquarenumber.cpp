//leetcode 633 link - https://leetcode.com/problems/sum-of-square-numbers/
#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
    bool f(int c) {
        long long a=0;
        // i used sqrt here because if i dont tle will occur becuse of size
        long long b=sqrt(c);
        
        while(a<=b){
            long long sum= a*a + b*b;
            if(sum==c) return true;
            else if(c > sum) a++;
            else b--;
        }
        return false;
        
    }
    
};
int main(){
    int b;
    cin>>b;
    solution s;
    bool k = s.f(b);
    cout<<to_string(k);
    
}