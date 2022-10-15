//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void solve(vector<int> nums,int index,vector<vector<int>> &ans,vector<int> output){
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }
        solve(nums,index+1,ans,output);
        int ele=nums[index];
        output.push_back(ele);
        solve(nums,index+1,ans,output);
    }
    vector<vector<int> > subsets(vector<int>& nums)
    {
        //code here
        vector<vector<int>>ans;
        vector<int>output;
        solve(nums,0,ans,output);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends
