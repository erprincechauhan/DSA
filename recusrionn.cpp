# include <bits/stdc++.h>
using namespace std;

void printnto1(int n){
    if (n == 0) return;
    cout << n << endl;
    n--;
    printnto1(n); 
    
}

void print1ton(int n){
    if (n == 0) return; // Base condition where the function stops calling itself
    print1ton(n-1);     // here function calls itself until the specific condition is met which is base condition
    cout << n << endl;

}

int NumbersSum(int n){
    if (n == 0 ) return 0;
    return n + NumbersSum(n-1);
}

int factorial(int n){
    if (n == 0 ) return 1;
    return n * factorial(n-1); 
}
    
int main (){
    int n ;
    cout << "Enter the numbers: ";

    cin >> n;
    // printnto1(n);
    // print1ton(n);
    NumbersSum(n);
}