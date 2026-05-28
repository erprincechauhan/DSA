# include <iostream>
using namespace std;

class Solution {
public:
    // void printNumber() {
    //     int a;

    //     cout << "Enter the number: ";
    //     cin >> a;

    //     cout << a;

    // }

    int Addition(int a, int b){
        int c = a+b;
        return c;
    }
};

int main (){
    int a,b;
    cin >> a >> b;
    Solution Add;
    cout << Add.Addition(a, b);
    // cout << res;
}

