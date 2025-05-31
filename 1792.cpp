#include<iostream>
#include<vector>
using namespace std;


double fraction(int a, int b){
    double k=(1.0*a)/b;
    return k;
}
int main(){
    vector<vector<int>> classes={{1,2},{3,5},{2,2}};
    int extraStudents=2;
    int left=0;
    double  res=0;
    while(left<classes.size()-1){
        double  sum=0;
        for(int i=0;i<classes.size();i++){
            if(left==i){
                int a=classes[i][0]+extraStudents;
                int b=classes[i][1]+extraStudents;
                sum+=fraction(a,b);
            }
            else{
                sum+=fraction(classes[i][0],classes[i][1]);
            }
        }
        cout<<sum/classes.size()<<endl;
        res=max(res,sum/classes.size());
        left++;
    }
    cout<<res;
    return res;
}