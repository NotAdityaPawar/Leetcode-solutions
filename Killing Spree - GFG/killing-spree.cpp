// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
public:
    long long int killinSpree(long long int n)
    {
        long long int sum = 0;
        long long int i = 1;
        long long int s = pow(i,2);
        long long int p = n;
        
        while (sum<n){
            if (s<=p){
                p -= s;
                sum += s;
                i++;
            }
            else break;
            s = pow(i,2);
        }
        return (i-1);
    }
    
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n; cin>>n;
        Solution obj;
        long long int ans = obj.killinSpree(n);
        cout<<ans<<"\n";
    }
    return 0;
}
  // } Driver Code Ends