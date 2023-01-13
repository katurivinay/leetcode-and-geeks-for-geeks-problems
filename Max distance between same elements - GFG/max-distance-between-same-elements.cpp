//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
    // unordered_map<int,pair<int,int>> mp;
    // int ans = 0;
    // for(int i = 0 ; i < n ; i++){
    //     if(mp[arr[i]].first == 0)mp[arr[i]].first = i+1;
    //     mp[arr[i]].second = max(mp[arr[i]].second,i+1);
    //     ans = max(ans,abs( mp[arr[i]].first -  mp[arr[i]].second));
    // }
    // return ans;
     unordered_map<int, int> mp;
 
    // Traverse elements and find maximum distance between
    // same occurrences with the help of map.
    int max_dist = 0;
    for (int i=0; i<n; i++)
    {
        // If this is first occurrence of element, insert its
        // index in map
        if (mp.find(arr[i]) == mp.end())
            mp[arr[i]] = i;
 
        // Else update max distance
        else
            max_dist = max(max_dist, i - mp[arr[i]]);
    }
 
    return max_dist;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends