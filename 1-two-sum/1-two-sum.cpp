class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int n=num.size();
        vector<int>ans;
        vector< pair<int,int> >nums;
        for(int i=0;i<n;i++)
        {
            pair<int,int>temp(num[i],i);
            nums.push_back(temp);
        }
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        while(i<j){
            if(nums[i].first+nums[j].first==target ){
                //pair<int,int>t={nums[i].second,nums[j].second};
                ans.push_back(nums[i].second);
                ans.push_back(nums[j].second);
                return ans;
                
            }
            else if(nums[i].first+nums[j].first>target){
                --j;
            }
            else{
                i++;
            }
        }
        return ans;
        
    }
};