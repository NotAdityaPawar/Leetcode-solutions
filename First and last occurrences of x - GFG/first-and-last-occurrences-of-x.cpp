// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    vector<int> ans;
    int f = -1;
    int s = -1;
    int count = 0;
    for (int i = 0;i<n;i++){
        if (arr[i]==x and f==-1){
            f = count;
        }
        if (arr[i]==x and f!=-1){
            s = count;
        }
        count += 1;
    }
    ans.push_back(f);
    ans.push_back(s);
    return ans;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends