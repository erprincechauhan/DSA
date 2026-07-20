# include <bits/stdc++.h>
using namespace std;

void SingleNumber(vector<int> &nums){
    int XOR = 0;
    for (int i = 0; i < nums.size(); i++){
        XOR = XOR ^ nums[i];
    }

    cout << XOR;
}

int main (){
    int n;
    cout << "Enter the number of elements in first vector: ";
    cin >> n;
    
    vector <int> nums;
    cout << "Enter the elements of first vector: "<< endl;
    for(int i = 0 ; i < n ; i++){
        int val;
        cin >> val;
        nums.push_back(val);
    }

    SingleNumber(nums);

    return 0;
}