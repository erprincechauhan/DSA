# include <bits/stdc++.h>
using namespace std;

void printnto1(int i,int n){
    // if (n == 0) return;
    // cout << n << endl;
    // n--;
    // printnto1(n); 
    if (i > n) return;  // here we take i = initial value and when i > n the condition will become false and the function no more calles itself.
    cout << n << endl;
    printnto1(i+1,n);  // here we increased i by 1 until it reaches i > n , when i becomes  greaten than n then the base case will fail and it will not further call itself.
    
}

void print1ton(int i,int n){
    // if (n == 0) return; // Base condition where the function stops calling itself
    // print1ton(n-1);     // here function calls itself until the specific condition is met which is base condition
    // cout << n << endl;

    if (i < n) return;
    print1ton(i-1,n);
    cout << i << endl;

}

int NumbersSum(int n ,int sum = 0){
    // Parameterized
    if (n < 1 ) return sum ;
    return  NumbersSum(n-1,sum + n);

    // Non - Parameterized
    if (n == 0 ) return 0;
    return n + NumbersSum(n-1);
}

int factorial(int n , int prod = 1){
    // Parameterized
    if (n < 1) return prod;
    return factorial(n-1,prod*n); // here n - 1 is decresing the value of n like if i/p is 3 then it will be 2 and prod * 3(i/p).

    // Non - Parameterized
    if (n == 0 ) return 1;
    return n * factorial(n-1); 
}

int reversearr(int arr[], int i,int left,int right,int n){ // here i and arr used for 1 variable implementation and left, right is used for 2 variable implementation.
    // Using 2 variables
    if(left >= right ) return 0;
    swap(arr[left],arr[right]);
    return reversearr(arr,i,left+1,right-1,n);

    // using 1 variable
    if (i >= n/2) return 0 ;
    swap (arr[i],arr[n-i-1]);
    return reversearr(arr,i+1,left,right,n);

}
bool palindrome(string s, int left , int right,int i){
    // usind double variable
    if (left >= right) return true;
    if(s[left] != s[right]) return false;
    palindrome(s,left + 1, right - 1);

    // using single variable
    if (i >= s.size()/2) return true;
    if (s[i] != s.size() - i -1) return false;
    return palindrome(s, i+1);
}

int fibonacci(int n){
    if (n == 0 ) return 0;
    if (n == 1 ) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}
    
int main (){
    int n ;
    cout << "Enter the numbers: ";

    cin >> n;
    // printnto1(1,n);
    // print1ton(n,n);
    // NumbersSum(n);
    // factorial(n);
    // reversearr(arr,i,left,right);
    fibonacci(n);

}