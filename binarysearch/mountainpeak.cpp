#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int l=0 , h= arr.size()-1;
        // we have to do this question in o(logn) so i used binary search in it
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
            else if (arr[mid]<arr[mid-1]) h=mid;
            else  l=mid+1;

        }
        return -1;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec[i];
    }
    Solution s;
    int s1= s.peakIndexInMountainArray(vec);
    cout<<s1;
    
}