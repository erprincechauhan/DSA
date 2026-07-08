# include <bits/stdc++.h>
using namespace std;


// Brute Force
// void moveZeros(vector<int> &nums){
//     vector <int> temp;
//     for(int i = 0; i < nums.size(); i++){
//         if(nums[i] != 0){
//             temp.push_back(nums[i]);
//         }
//     }

//     for(int i = 0; i < temp.size(); i++ ){
//         nums[i] = temp[i];
//     }

//     for(int i = temp.size(); i < nums.size(); i++){
//         nums[i] = 0;
//     }
// }
/*
Time Complexity - O(2N) 
Space Complexity - O(N)
*/

// Optimal
void moveZerotoEnd(vector <int> &nums){
    int j = -1;
    for (int i = 0; i < nums.size(); i++){
        if(nums[i] == 0){
            j = i;
            break;
        }
    }

    for(int i = j+1; i < nums.size() ; i++){
        if(nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

/*
Time Complexity : O(N)
Space Complexity : O(1)
*/


int main (){
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;

    vector <int> nums(n);
    cout << "Enter the elements of vector: " << endl;

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    // moveZeros(nums);
    moveZerotoEnd(nums);

    cout << "Zero moved to end: ";
    for (int it : nums){
        cout << it << " ";
    }

    return 0;
}