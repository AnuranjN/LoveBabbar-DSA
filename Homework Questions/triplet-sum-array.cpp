#include <bits/stdc++.h> 
findTriplets(vector<int>arr, int n) {
	// Write your code here
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    vector<int>temp;
                    temp.push_back(min(arr[i],arr[j],arr[k]));
                    temp.push_back(max(arr[i],arr[j],arr[k]));
                    ans.push_back(temp);
                }
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}