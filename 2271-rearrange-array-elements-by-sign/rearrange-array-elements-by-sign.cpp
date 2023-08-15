class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int>pos; 
       vector<int>neg; 
        int N=nums.size();
       for(auto i:nums){
           if(i > 0){
               pos.push_back(i);
           }else{
               neg.push_back(i);
           }
       }
       
       vector<int>ans;
       for(int i=0;i<N/2;i++){
           ans.push_back(pos[i]);
           ans.push_back(neg[i]);
       }
       return ans;
    }
};