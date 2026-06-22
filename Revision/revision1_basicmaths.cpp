# include <bits/stdc++.h>
using namespace std;

int countDigits(int n ){
    int count = 0;
    while (n>0){
        count++;
        n = n/10;
    }
    return count;
}

int reverseNumbers(int n){
    int last_dig, reversed = 0;
    while (n > 0){
        last_dig = n % 10;
        reversed = (reversed * 10 ) + last_dig;
        n = n/10 ;
    }
    return reversed;
}

bool palindrome(int n){
    int original = n;
    int last_dig, reversed = 0;
    while (n > 0){
        last_dig = n % 10;
        reversed = (reversed * 10 ) + last_dig;
        n = n/10 ;
    }
    return reversed == original;
}

bool armstrong(int n ){
    int count = 0;
    int original = n;
    int last_dig, reversed = 0;
    int num = n;
    while (n>0){
        count++;
        n = n/10;
    }

    while (num > 0){
        last_dig = num % 10;
        reversed = (reversed * 10 ) + pow(last_dig,count);
        num = num / 10 ;
    }

    return reversed == original;
    
}

vector<int> Divisor(int n){
    vector<int> nums;
    for (int i = 1; i*i <= n;i++){
        if(n % i == 0) {
            nums.push_back(i);
        }
    }

    return nums;
}

bool prime(int n) {
    vector<int> nums;
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            if(n % i != i ){
                nums.push_back(i);
                nums.push_back(n/i);
            }
            else nums.push_back(i);
        }
    }

    if (nums.size() == 2) return true;
    else return false;
}

int gcd(int n1 ,int n2){
    int gcd;
    for (int i = 1 ; i <= min(n1,n2) ;i++){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
    return gcd;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int o;
    cout << "Enter the second number: ";
    cin >> o;

    countDigits(n);
    reverseNumbers(n);
    palindrome(n);
    armstrong(n);
    Divisor(n);
    prime(n);
    gcd(n,o);

    cout << countDigits(n) << endl;
    cout << reverseNumbers(n) << endl;
    cout << palindrome(n) << endl;
    cout << armstrong(n) << endl;

    vector<int> divs = Divisor(n);
    for(auto x : divs){
        cout << x << " " << endl;
    }
    
    cout << prime(n) << endl;
    cout << gcd(n,o) << endl;

    return 0;
}