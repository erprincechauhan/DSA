# include <bits/stdc++.h>
using namespace std;
"""
TUF Counting Frequencies of Array Elements problem.

Given an array nums of size n which may contain duplicate elements.
Return a list of pairs where each pair contains a unique element from the array and its frequency in the array.
You may return the result in any order, but each element must appear exactly once in the output.

Example 1
Input: nums = [1, 2, 2, 1, 3]
Output: [[1, 2], [2, 2], [3, 1]]
Explanation:
- 1 appears 2 times
- 2 appears 2 times
- 3 appears 1 time

Order of output can vary.
"""

int main (){
    // vector<vector<int> countFrequencies(vector<int>&nums){
        vector<int> nums = {1,2,3,2,1,3,3,4,3,4,5,6,6,5,5,5,6,7,7,9,9};
        map <int,int> mp;
        for (int i = 0 ; i<nums.size();i++){
            mp[nums[i]]++;
        }

        vector<vector<int>> freq;
        for(auto it:mp){
            freq.push_back({it.first,it.second});
        }

        for (auto it : freq){
            cout << it[0] << " -> " << it[1] << endl;
        }

        // return freq;
        

    // }
    return 0;
}