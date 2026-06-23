# include <bits/stdc++.h>
using namespace std;

void largestEle(int arr[],int n){
    int largest = arr[0];
    for (int i = 0; i < n ; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "The largest element of array is: "<< largest << endl;
}

void secLargest(int arr[], int n){
    int largest = arr[0];
    int secondLarg = -1;
    for(int i = 1 ; i < n ;i++ ){
        if (arr[i] > largest){
            secondLarg = largest;   // this is the optiomal solituon as the time complexity is O(n), as only one loop is runing till n.
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLarg){
            secondLarg = arr[i];
        }
    }
    // for(int i = 0 ; i < n;i++ ){  // in this case time complexity will be O(2n), as 2 loops are running n times.
    //     if (arr[i] > secondLarg && arr[i] != largest){
    //         secondLarg = arr[i];
    //     }
    // }
    cout << "The second largest element of array is: " << secondLarg << endl;

}

// tell the smallest and second smallest element of array.
void Wsmallest(int arr[], int n ){
    int smallest = arr[0];
    int secondSmall = INT_MAX;
    for(int i = 1 ; i < n ;i++ ){
        if (arr[i] < smallest){
            secondSmall = smallest;   // this is the optiomal solituon as the time complexity is O(n), as only one loop is runing till n.
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < secondSmall){
            secondSmall = arr[i];
        }
    }
    cout << "The smallest element of array is: " << smallest << endl;
    cout << "The second smallest element of array is: " << secondSmall << endl;

}


// check if the array is sorted or not
bool sortedArr(int arr[], int n){
    for (int i = 1; i < n ; i++){
        if (arr[i] <= arr[i+1]){
        }
        else return false;
    }
    return true;
    
}

int main (){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array: " << endl;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    // largestEle(arr,n);
    // secLargest(arr,n);
    // Wsmallest(arr,n);
    sortedArr(arr,n);

    return 0;
}