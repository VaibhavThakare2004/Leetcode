class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values){
        int max_i=values[0]+0;
        int result=0;
        for(int j=1;j<values.size();j++){
            result=max(result,max_i+values[j]-j);
            max_i=max(max_i,values[j]+j);
        }
    return result;
    }
};
