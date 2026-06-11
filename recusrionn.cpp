# include <bits/stdc++.h>
using namespace std;

void printnto1(int i,int n){
    // if (n == 0) return;
    // cout << n << endl;
    // n--;
    // printnto1(n); 
    if (i>n) return;  // here we take i = initial value and when i > n the condition will become false and the function no more calles itself.
    cout << n << endl;
    printnto1(i+1,n);  // here we increased i by 1 until it reaches i > n , when i becomes  greaten than n then the base case will fail and it will not further call itself.
    
}

void print1ton(int i,int n){
    // if (n == 0) return; // Base condition where the function stops calling itself
    // print1ton(n-1);     // here function calls itself until the specific condition is met which is base condition
    // cout << n << endl;

    if (i > n) return;
    print1ton(i+1,n);
    cout << n << endl;

}

int NumbersSum(int i ,int n){
    if (n == 0 ) return 0;
    return n + NumbersSum(n-1);
}

int factorial(int n){
    if (n == 0 ) return 1;
    return n * factorial(n-1); 
}

int reversearr(int arr[], int n){

}
    
int main (){
    int n ;
    cout << "Enter the numbers: ";

    cin >> n;
    // printnto1(1,n);
    // print1ton(1,n);
    NumbersSum(n);
}