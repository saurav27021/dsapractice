// question 1277 leetcode link = https://leetcode.com/problems/count-square-submatrices-with-all-ones/description/?envType=daily-question&envId=2025-08-20
#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
    int checksquare(vector<vector<int>> &vec){
        int n= vec.size();
        int m=vec[0].size();
        vector<vector<int>> sol(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            sol[i][0]=vec[i][0];
        }
        for(int i=0;i<m;i++){
            sol[0][i]=vec[0][i];
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(vec[i][j]==0){
                    sol[i][j]=0;
                }else{
                    sol[i][j]= 1 +  min(sol[i-1][j-1], min(sol[i][j-1],sol[i-1][j]));
                }
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum+=sol[i][j];
            }
        }
        return sum;
    }
};
int main() {
    int n;
    int m;
    cin>>n;
    cin>>m;
    vector<vector<int>> vec(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    solution s;
    int square= s.checksquare(vec);
    cout <<square;
    
}