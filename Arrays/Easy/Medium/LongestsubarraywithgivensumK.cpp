# include <bits/stdc++.h>
using namespace std;

// Brute force (positive)
void longestSubarray(vector<int> &nums, int k){
    int length = 0;
    for(int i = 0 ; i < nums.size(); i++){
        int sum = 0;
        for(int j = i ; j < nums.size(); j++){
            sum += nums[j];

            if(sum == k){
                length = max(length, j-i+1);
            }
        }
    }
    cout << length;

/*
Time Complexity : O(n^2) approx.
Space Complexity: O(1)
*/
}


// Better and optimal if therre are zeroes
void Better_longestSubarray(vector<int> &nums, int k){
    map <long long, int> preSumMap;
    long long sum = 0;
    int length = 0;
    for (int i = 0 ;i < nums.size() ;i++){
        sum += nums[i];
        if(sum == k ){
            length = max(length ,i +1);
        }

        long long remaining = sum - k;
        if(preSumMap.find(remaining) != preSumMap.end()){
            int len = i - preSumMap[remaining];
            length = max(length, len);
        }

        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i;
        }
    }

    cout << length;

/*
Time Complexity: O(n * logn)
Space Complexity: O(n)
*/
}

// Optimal (for positives)
void Optimal_longestSubarray(vector<int> &nums, int k){
    int right = 0;
    int left = 0;
    long long sum = nums[0];
    int n = nums.size();
    int maxLen = 0;
    
    while(right < n){
        while(left <= right && sum > k){
            sum -= nums[left];
            left++;
        }

        if(sum == k){
            maXLen = max(maxLen, right - left +1);
        }

        right++ ;
        if(right > n ){
            sum += nums[right]; 
        }

    }



/*
Time Complexity : O(2N) - worst case    
Space Complexity :O(1)
*/
}

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


    int k ;
    cout << "Enter the targated sum: " ;
    cin >> k;

    // longestSubarray(nums,k);
    Better_longestSubarray(nums,k);

    return 0;
}