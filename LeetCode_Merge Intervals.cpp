//Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and
//return an array of the non-overlapping intervals that cover all the intervals in the input.

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        if(n==1)
            return intervals;
        vector<vector<int>> res;
        sort(intervals.begin(),intervals.end());
        res.push_back({intervals[0][0],intervals[0][1]});
        for(int i=1;i<n;++i) {
            int s=res.size()-1;
            if(intervals[i][0]<=res[s][1])
                res[s][1]=max(res[s][1],intervals[i][1]);
            else
                res.push_back({intervals[i][0],intervals[i][1]});
        }
        return res;
        
    }
};
