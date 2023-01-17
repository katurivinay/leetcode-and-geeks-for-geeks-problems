//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        vector<int> pref_sum(n+1,0);
        for(int i = 0 ; i  < n ; i++){
            pref_sum[i+1] = pref_sum[i] + A[i];
        }
        // Your code here
        int ans = 0;
        unordered_map<int,int> mp;
        for(int i = 1 ; i  <= n ; i++){
            if(pref_sum[i] == 0)ans = max(ans,i);
            else if(mp.find(pref_sum[i]) != mp.end()){
                ans = max(ans,abs(i - mp[pref_sum[i]]));
            }
            else{
                mp[pref_sum[i]] = i;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends