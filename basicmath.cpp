# include <bits\stdc++.h>
using namespace std;


// You are given an integer n. You need to return the number of digits in the number.
int countNumber(int n){
    int count = 0 ;

    while (n != 0){
        count ++;
        n = n /10;
    }

    cout << count;
    return 0;
}

// You are given an integer n. Return the integer formed by placing the digits of n in reverse order.
int reverse(int n){
    int last_dig , reversed = 0;

    while (n != 0){
        last_dig = n % 10;
        reversed = (reversed * 10) + last_dig;
        n = n /10;
    }
    cout<< reversed;

    return reversed;
}

// You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.
bool palindrome(int n){
    int num = n;
    int last_dig, reversed = 0;
    bool flag ;

    while (n != 0){
        last_dig = n % 10;
        reversed = (reversed * 10) + last_dig;
        n = n /10;
    }

    if (num == reversed) return flag = true;
    else return flag = false;

}


// You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.
bool armStrong(int n ){
    int original = n,num = n;
    int last_dig , armstrong = 0 , count = 0;

    while (n != 0){
        count++;
        n = n/10;
    }

    while (num != 0){
        last_dig = num % 10;
        armstrong = armstrong  + pow(last_dig,count);
        num = num/10;
    }

    return armstrong == original;
}




// You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.

vector<int> divisor(int n){

    vector<int> divisor;

    // for (int i = 1; i <= n ; i++){ // time complexity = O(n)
    //     if (n % i == 0){
    //         divisor.push_back(i);
    //     }
    // }

    // for (int i = 1; i <= sqrt(n) ; i++)
    for (int i = 1; i*i <= n ; i++)
    { // Time complexity = O(sqrt (n))
        if (n % i == 0){
            if((n/i) != i) {
                divisor.push_back(i);
                divisor.push_back(n/i);
            }
            else divisor.push_back(n/i);
        }
    }

    return divisor;
}


// You are given an integer n. You need to check if the number is prime or not. Return true if it is a prime number, otherwise return false.
bool prime(int n){
    int count = 0;
    for (int i = 1 ; i*i <= n ; i++ ){
        if (n % i == 0){
            if (n/i != i) count++;
            count++;
        }
    }

    if (count == 2) return true;
    else return false;
}


int GCD(int n1,int n2){
    int gcd;
    for (int i = 1 ; i <= min(n1,n2);i++){
        if (n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
    return gcd;
}


int main (){
    int num,num2;
    cout << "Enter the number: ";
    cin >> num ;

    // countNumber(num);
    // reverse(num);
    // if(palindrome(num)) cout << "Palindrome";
    // else cout << "Not Palindrome";
    // if(armStrong(num)) cout << "Armstrong";
    // else cout << "Not Armstrong";
    // divisor(num);
    // if(prime(num)) cout<< "prime";
    // else cout << "not prime";
    cin >> num2;
    gcd(num,num2);
    return 0;
}

