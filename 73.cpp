#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>matrix={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    int m=matrix.size();
    int n=matrix[0].size();
    
    vector<bool>row(m,false),column(n,false);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                   row[i]=true;
                   column[j]=true;
                }
            }
        }
    
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(row[i]|| column[j]){
                   matrix[i][j]=0;
                }
            }
        }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<"->";
        }
        cout<<endl;
    } 
}
