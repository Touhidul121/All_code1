class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {

        vector<vector<int>>ans;
        map<vector<int>,int>mp;
        vector<int>v1;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            int x=0-v[i];
            int j=i+1,k=v.size()-1;

            while(j<k)
            {
                if(v[j]+v[k]==x)
                {
                    v1.push_back(v[i]);
                    v1.push_back(v[j]);
                    v1.push_back(v[k]);
                    mp[v1]++;
                    v1.clear();
                    j++,k--;
                    //break;
                }
                else if(v[j]+v[k]>x)k--;
                else j++;;
            }
        }
        for(auto x:mp)
        {
            ans.push_back(x.first);
        }
        return ans;
    }
};
