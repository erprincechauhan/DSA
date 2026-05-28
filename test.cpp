# include <iostream>
using namespace std;
class Solution {
public :
    int reverse(int x){
        int last_dig, reversed = 0;
        while (x!=0){
            last_dig = x % 10 ;
            x = x / 10;
            if(reversed < 2147483647/10 && reversed > -2147483647/10 ){
                reversed = (reversed * 10) + last_dig;
            }
            else if(reversed == 214748364 && last_dig <= 7){
                reversed = (reversed * 10) + last_dig;
            }
            else if(reversed == -214748364 && last_dig <= 8){
                reversed = (reversed * 10) + last_dig;
            }
            
            else {
                return 0;
            }
                        
        }cout << reversed;
        return reversed;
        
    }       
};

int main (){   
    int x ;
    cout << "Enter the integer: ";
    cin >> x;

    Solution rev;   
    rev.reverse(x);
    

}