// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        vector<int> ans;
        for (int i = 0;i<n;i++){
            int flag = 1;
            for (int j = i;j<n;j++){
                if (arr[j]<arr[i]){
                    ans.push_back(arr[j]);
                    flag = 0;
                    break;
                }
            }
            if (flag) ans.push_back(-1);
        }
        return ans;
    } 
};

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}

  // } Driver Code Ends