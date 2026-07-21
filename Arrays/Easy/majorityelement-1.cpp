# include <bits/stdc++.h>
using namespace std;


// Brute Force
void Majority_Ele(vector <int> &nums){
    for(int i = 0; i< nums.size(); i++){
        int count = 0;
        for(int j  = 0 ; j < nums.size(); j++){
            if(nums[i] == nums[j]){
                count++;
            }
        }
        if(count > nums.size()/2){
            cout << nums[i];
        }
    }
}
/*
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

// Better
void Better_Maj_Ele(vector <int> &nums){
    map<int, int> mp;
    for(int i = 0; i < nums.size(); i++){
        mp[nums[i]]++;
    }

    for(auto it:mp){
        if(it.second > nums.size()/2){
            cout << it.first;
        }
    }

}

/*
Time Complexity : O(N logN) + O(N)
Space complexity: O(N)
*/



// Optimal
void Opti_Maj_Ele(vector <int> &nums){
    int element ;
    int count = 0;
    int count1 = 0;
    for(int i = 0 ; i < nums.size(); i++){
        if(count == 0){
            count = 1;
            element = nums[i];
        }
        else if(element == nums[i] ){
                count++;
        }
        else {
            count--;
        }

    }
    for(int i = 0; i < nums.size(); i++){
        if(element == nums[i]) count1++;
    }
    if (count1 > nums.size()/2) cout << element;
    
}
/*
Time Complexity : O(n) + O(n)(not exist of the problem state that there will always be a majority element )
Space complexity : O(1)
*/


int main (){
    vector<int> nums ;
    int n ;
    cout << "Enter the size of vector: ";
    cin >> n;

    cout << "Enter the elements of vector" << endl;
    for (int i = 0; i < n; i++){
        int val;
        cin >> val;
        nums.push_back(val);
    }

    // Majority_Ele(nums);
    // Better_Maj_Ele(nums);
    Opti_Maj_Ele(nums);

    return 0;
}