//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string buildLowestNumber(string num, int k);
// Driver program to test above function
int main()
{
    int t,n;
    string str;
    cin>>t;
    while(t--)
    {
    cin>>n;
    cin>>str;
    cout << buildLowestNumber(str, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends


string buildLowestNumber(string num, int k)
{
    string res = "";
    int keep = num.size() - k;
    for (int i = 0;i<num.size();i++){
        while (res.size()>0 && res.back()>num[i] && k>0){
            k--;
            res.pop_back();
        }
        res.push_back(num[i]);
    }
    res.erase(keep, string::npos);

    int s = 0;
    while (s<(int) res.size()-1 and res[s]=='0') s++;
    res.erase(0,s);
    return res==""? "0": res;
    
}