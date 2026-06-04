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

int main (){
    int n ;
    cout << "Enter the numbers: ";

    cin >> n;
    // printnto1(n);
    print1ton(n);

}