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


int main (){
    int num;
    cout << "Enter the number: ";
    cin >> num ;

    // countNumber(num);
    // reverse(num);
    palindrome(num);
    

    return 0;
}

