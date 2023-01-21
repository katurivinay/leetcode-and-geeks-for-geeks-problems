//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int n, int k) 
    { 
    //     int sum = 0;
    //   unordered_map<int,int> mp;
    //   int ans = 0;
    //   for(int i = 0 ; i< n ; i++){
    //       sum = sum + A[i];
    //       if(sum==k)
    //         {
    //             ans = max(ans,i+1);
    //         }
    //       else if(mp.find(sum - k) != mp.end()){
    //           ans = max(ans, i - mp[sum - k]);
    //       }
    //       mp[sum] = i; 
    //   }
    //   return ans;
     int sum = 0;
        int maxi = 0;
        unordered_map<int,int> mp;
        for(int i = 0;i<n;i++)
        {
            sum += A[i];
            if(sum==k)
            {
                maxi = max(maxi,i+1);
            }
            else if(mp.count(sum-k)>0)
            {
                maxi = max(maxi,i - mp[sum-k]);
            }
            if(mp.count(sum)==0)
            {
              mp[sum] = i;
            }
        }
        return maxi;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends