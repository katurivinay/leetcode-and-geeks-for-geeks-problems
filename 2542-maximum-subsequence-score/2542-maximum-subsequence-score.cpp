class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int,int> > couple;
        for(int i = 0 ; i < nums1.size() ; i++){
            couple.push_back({nums2[i],nums1[i]});
        }
        sort(couple.rbegin(),couple.rend());
         priority_queue <int, vector<int>, greater<int> > pq;
        long long int sum = 0,ans = 0;
        for(int i = 0 ; i < nums1.size() ; i++)
        {
            pq.push(couple[i].second);
            if(pq.size() < k)
            {
                sum += couple[i].second;
            }
            else if(pq.size() == k)
            {
                sum += couple[i].second;
                ans = max(ans,(long long int)sum * couple[i].first);
            }
            else
            {
                sum += couple[i].second;
                int last = pq.top();
                pq.pop();
                sum -= last;
                ans = max(ans,(long long int)sum * couple[i].first);
            }
        }
        return ans;
    }
};