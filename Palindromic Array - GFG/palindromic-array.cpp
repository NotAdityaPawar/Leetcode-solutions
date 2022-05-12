// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
    bool ispalin(int a){
        int temp = a;
        int rev = 0;
        while (temp){
            rev = rev*10 + temp%10;
            temp /=10;
        }
        //cout<<rev;
        return rev==a;
    }
public:
    int PalinArray(int a[], int n)
    {
    	int ans = 1;
    	for (int i=0;i<n;i++){
    	    if (ispalin(a[i])){
    	        continue;
    	    }
    	    else ans = 0;
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
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends