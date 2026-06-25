# include <bits/stdc++.h>
using namespace std;

// left rotate array by 1.
void rotateArrby1(vector<int> &nums ){
    int temp = nums[0];
    for (int i = 1; i < nums.size(); i++){
        nums[i-1] = nums[i];
    }
    nums[nums.size()-1] = temp;

}

// left rotate array by k.
void rotateArrbyK(vector<int> &nums, int d){
    d = d % nums.size();
    vector<int> temp[d];

    for(int i = 0; i < d ; i++){ // copy the first d elements to the vector temp.
        temp[i] = nums[i];
    }

    for(int i = d ; i < nums.size(); i++){ // left shift the remaining elements.
        nums[i-d] = nums[i];
    }

    for(int i = nums.size()-d; i < nums.size(); i++){// copy the elements of temp to the end.
        nums[i] = temp[i-(nums.size()-d)];
    }

}


// right rotate array by k.
void rightrotate(vector<int>& nums, int k) {
    k = k % nums.size();
    vector<int> temp(k);

    for(int i = 0; i <k; i++){  // this store the last k elements for right rotation
        temp[i] = nums[nums.size()- k + i];
    }

    for(int i = nums.size() - k - 1; i >= 0; i--){ // shifts the remaining elements to right
        nums[i+k] = nums[i];
    }

    for(int i = 0; i < k; i++){ // copy the second elements to beginning for right rotation
        nums[i] = temp[i];
    }
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

    // rotateArrby1(nums);

    int d ;
    cout << "Enter how many times you want to rotate the array: " ;
    cin >> d;

    rotateArrbyK(nums,d);

    for (auto it = nums.begin(); it != nums.end(); it++){
        cout << * it << " ";
    }
    return 0;
}