# include <bits/stdc++.h>
using namespace std;

int printN(int n){
    if (n == 0) return 0;
    cout << n << endl;  // prints N to 1.
    printN(n-1);   // Recurcive call
    cout << n << endl; // prints 1 to N.
}

int sumN(int n){
    if (n == 0) return 0;
    return n + sumN(n-1);
}

int factorial(int n){
    if (n == 0) return 1;
    return n * factorial(n-1);
}

int reversearr(int arr[] , int left, int right){
    if (left >= right) return 0;
    swap(arr[left], arr[right]);
    return reversearr(arr, left + 1, right - 1);
}

bool palindrome(string s, int left, int right){
    if (left >= right ) return true;
    if(s[left] == s[right]) return true;
    palindrome(s,left + 1, right - 1);
}

int fibonacci(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}


int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // int arr[n];
    // cout << "Enter the elements: " << endl;
    // for (int i = 0 ; i < n; i++){
    //     cin >> arr[i];
    // }
    // int left = 0 , right = n-1;

    // printN(n); 
    // cout << sumN(n); 
    // cout << factorial(n);
    // cout << reversearr(arr,left,right);
    fibonacci(n);
}
