class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        //cnt will store number of common elements till current index
        int n=A.size(),cnt=0;
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            mp[A[i]]++;
            mp[B[i]]++;
            //if current element is encountered 2 times then increment cnt
            if(mp[A[i]]%2==0)
                cnt++;
            //checking A[i]!=B[i] so that if both array have same element at current index then we don't increement count twice
            if(mp[B[i]]%2==0&&A[i]!=B[i])
                cnt++;
            ans.push_back(cnt);
        }
        return ans;
    }
};