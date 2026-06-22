# include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1 ; i++){
        int min = i;
        for(int j = i; j < n ; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[min]; 
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n ;i++){
        for (int j = 0 ; j < n - i - 1 ;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void insertionSort(int arr[], int n){
    for(int i = 0; i < n; i++ ){
        int key = arr[i] , j = i-1;
        while(j >= 0 && arr[j] > key ){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int n ;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: "<< endl;
    for (int i = 0 ; i < n; i++){
        cin >> arr[i];
    }

    selectionSort(arr,n);
    for (int k = 0 ; k < n ; k++){
        cout << arr[k] << " ";
    }

    bubbleSort(arr,n);
    for (int k = 0 ; k < n ; k++){
        cout << arr[k] << " ";
    }

    insertionSort(arr,n);
    for (int k = 0 ; k < n ; k++){
        cout << arr[k] << " ";
    }

    return 0;
}