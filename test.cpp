class Solution {
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        int n=people.size();
        
        vector<pair<int,int>> res;
        
        auto cmp=[](pair<int,int>&p1,pair<int,int>&p2){return p1.first>p2.first||(p1.first==p2.first&&p1.second<p2.second);};
        sort(people.begin(),people.end(),cmp);
        
        for(auto p:people)
        {
            res.insert(res.begin()+p.second,p);
        }
        return res;
    }
};
