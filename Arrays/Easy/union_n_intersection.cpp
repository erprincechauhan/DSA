# include <bits/stdc++.h>
using namespace std;


// Brute force
void unionArray(vector<int>& nums1, vector<int>& nums2) {
    set <int> temp;

    vector <int> res; 

    for(int i = 0 ; i < nums1.size(); i++){
        temp.insert(nums1[i]);
    }

    for(int i = 0; i < nums2.size(); i++){
        temp.insert(nums2[i]);
    }

    for(auto it:temp){
        res.push_back(it);
    }
        
    for(auto it :res){
        cout << it << " ";
    }
    // cout << res;
    // return res;

/*
Time Complexity: O(n1 log n + n2 log n) + O(n1 + n2)
Space Complexity: O(n1+n2) + O(n1+n2) 
*/
}


// Optimal 
void ArrayUnion(vector<int>& nums1, vector<int>& nums2){
    vector <int> res; 
    int i = 0;
    int j = 0;

    while (i < nums1.size() && j < nums2.size() ){
        if(nums1[i] <= nums2[j]){
            if (res.empty() || res.back() != nums1[i]){
                res.push_back(nums1[i]);
            }
            i++;
        }

        else{
            if (res.empty() || res.back() != nums2[j]){
                res.push_back(nums2[j]);
            }
            j++;
        }
    }

    while (i < nums1.size()){
        if (res.empty() || res.back() != nums1[i]){
            res.push_back(nums1[i]);
        }
        i++;
    }

    while (j < nums2.size()){
        if (res.empty() || res.back() != nums2[j]){
            res.push_back(nums2[j]);
        }
        j++;
    }

    for(auto it :res){
        cout << it << " ";
    }

/*
Time Complexity: O(n1 + n2)
Space Complexity: O(n1+n2)
*/

}

// Brute force
void InterArray(vector<int> &nums1, vector<int> &nums2){

    int visited[nums2.size()] = {0};
    vector<int> result;

    for(int i = 0; i < nums1.size(); i++){
        for(int j = 0; j < nums2.size(); j++){
            if(nums1[i] == nums2[j] && visited[j] == 0){
                result.push_back(nums1[i]);
                visited[j] = 1;
                break;
            }

            if(nums2[j] > nums1[i]) break;
        }
    }


    for(auto it :result){
        cout << it << " ";
    }

/**
Time complexity : O(n1*n2)
Space Complexity : O(n2)
*/

}

// optimal
void Inter_Array(vector<int> &nums1, vector<int> &nums2){
    int i = 0;
    int j = 0 ;
    vector <int> result;

    while( i < nums1.size() && j < nums2.size() ){
        if ( nums1[i] > nums2[j]){
            i++;
        }
        else if ( nums1[i] < nums2[j]){
            j++;
        }

        else{
            result.push_back(nums1[i]);
            i++;
            j++;
        }
    }

    for(auto it :result){
        cout << it << " ";
    }
}


int main (){
    int n;
    cout << "Enter the number of elements in first vector: ";
    cin >> n;
    
    vector <int> nums1;
    cout << "Enter the elements of first vector: "<< endl;
    for(int i = 0 ; i < n ; i++){
        int val;
        cin >> val;
        nums1.push_back(val);
    }
    
    int m; 
    cout << "Enter the number of elements in first vector: ";
    cin >> m;

    vector <int> nums2;
    cout << "Enter the elements of second vector: "<< endl;
    for(int i = 0 ; i < m ; i++){
        int val;
        cin >> val;
        nums2.push_back(val);
    }

    // unionArray(nums1,nums2);
    // ArrayUnion(nums1,nums2);
    // InterArray(nums1,nums2);
    Inter_Array(nums1,nums2);


    return 0;
}


