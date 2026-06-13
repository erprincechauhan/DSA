# include<bits/stdc++.h>
using namespace std;


int mostFrequentElement(vector<int>& nums) {
    map<int,int> mp;
    // unordered_map<int,int> mp; // if using unordered map the else if condition must be there.
    int count = 0 , element = 0;

    for (int i = 0; i < nums.size() ; i++){
        mp[nums[i]]++;
    }

    for(auto it : mp){
        if(it.second > count ){ 
            count = it.second;
            element = it.first;
        }

        // for unordered_map one condition will add
        // else if (count == it.second && element > it.first) element = it.first;
        
    }

    return element;
}