# include <bits/stdc++.h>
using namespace std;

void Two_sum(vector<int> & nums, int target){
    vector <int> element;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < nums.size(); j++){
            if(nums[i] + nums[j] == target){
                element.push_back(i);
                element.push_back(j);
            }
        }
    }

    for(auto it : element){
        cout << it << " ";
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

    int target ;
    cout << "Enter targeted sum: " ;
    cin >> target;

    Two_sum(nums,target);

    return 0;
}