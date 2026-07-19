# include <bits/stdc++.h>
using namespace std;

// Brute force
void missing_num(vector<int> &nums){
    for (int i = 0; i <= nums.size() ; i++){
        int flag = 0;
        for(int j = 1; j < nums.size()-1 ; j++){
            if(nums[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout << i;
            // return i;
        }
    }

/*
Time complexity : O(n*n) :- worst case
Space Complexity : O(1)
*/
}


// Better
int missing_numBetter(vector<int> & nums){
    int n = nums.size();
    vector<int> hash(n+1,0);

    for(int i = 0; i < nums.size() ;i++){
        hash[nums[i]] = 1;
    }
    for(int i = 1; i <= nums.size() ; i++){
        if(hash[i] == 0){
            cout << i << " ";         
        }
    }
/*
Time complexity : O(n) + O(n) :- worst case
Space Complexity : O(n)
*/  
}


// Optimal (SUM)    
int missing_numSum(vector <int> &nums){
    long sum = (nums.size() * (nums.size() +1))/2;
    int sum2 = 0;
    for(int i = 0 ; i < nums.size(); i++){
        sum2 += nums[i];
    }

    return sum-sum2;
/*
Time complexity : O(n)
Space Complexity : O(1)
*/    
}

// Optimal (XOR)
int missing_numXOR(vector<int> &nums, int n){
    int XOR = 0;
    for(int i = 0; i <= n; i++){
        XOR = XOR^i;
    }

    int XOR1 = 0;
    for(int i = 0 ; i < n ; i++){
        XOR1 = XOR1^nums[i];
    }

    return  XOR^XOR1;
}



int main (){
    int n;
    cout << "Enter the number of elements of vector: ";
    cin >> n;
    vector <int> nums;
    cout << "Enter the elements of vector: " << endl;
    
    for(int i = 0 ; i < n; i++){
        int val; 
        cin >> val;
        nums.push_back(val);
    }

    // missing_num(nums);
    // missing_numBetter(nums);
    // missing_numSum(nums);
    missing_numXOR(nums,n);

    return 0;
}