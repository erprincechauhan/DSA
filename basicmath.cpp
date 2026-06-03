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

int main (){
    int num;
    cout << "Enter the number: ";
    cin >> num ;

    countNumber(num);
    

    return 0;
}

