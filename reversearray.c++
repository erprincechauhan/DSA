# include <iostream>
using namespace std;

class Solution {
public:
    // REVERSE ARRAY
    void reverse(int arr[], int n){
        
        for (int j = n-1 ; j >= 0; j--){
            cout << arr[j] << " ";
        }
    }
};

int main (){
    int n ;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: " << endl;
    

    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    Solution rev;
    rev.reverse(arr, n);

}

