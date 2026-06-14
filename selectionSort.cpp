# include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    for (int i = 0 ; i <= n-2; i++ ){  // loop from 0 to second last element of array
        int minimum_ele = i;  // assuming minimum element to be at i'th index
        for (int j = i ; j <= n-1; j++){ // loop from current index(i) to last element of array
            if (arr[j] < arr[minimum_ele]) {  // checking if the minumum element is at j. Then j will become minimum element will
                minimum_ele = j; 
            }
        }
        int temp = arr[minimum_ele]; // Swaping using 3rd variable 
        arr[minimum_ele] = arr[i];
        arr[i] = temp;
        // swap(arr[minimum_ele],arr[i]); // can also use swap function of c++ for swaping elements.
    }
}


int main (){
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array: " << endl;
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    selectionSort(arr,n);

    for (int k = 0 ; k < n ; k++){
        cout << arr[k] << " ";
    }
    
    return 0;
}


"""
Time Complexity: O(n^2)
for best, average and worst case. It is the same O(n^2).
"""