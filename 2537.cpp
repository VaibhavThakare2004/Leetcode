#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums={3,1,4,3,2,2,4};
    int k=2;


    int res=0;
    int subarray_size=2*k;
    int loop=nums.size()-subarray_size+1;
    int left=-1;
    int right=-1;
    while(loop!=0){
        left++;
        right=left;
        right=right+subarray_size;
        while(right<=nums.size()){
            unordered_map<int,int>mp;
            for(int i=left;i<right;i++){
                mp[nums[i]]++;
            }
            int count=0;
            for(auto&it:mp){
                cout<<it.first<<endl;
                if(it.second>1){
                    cout<<"Greater"<<it.first<<endl;
                    count++;
                }
            }
            cout<<"end"<<endl;
            if(k<=count){
                res++;
            }
            right++;
        }
        loop--;
    }
    cout<<res;
    return res;
}