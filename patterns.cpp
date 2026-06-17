# include <iostream>
using namespace std;

class Patterns{
public: 
    void pattern1(int n){
        for (int i = 1 ; i <= n; i++){
            
            for(int j = 1 ; j <= n ; j++){
                cout << "*";
            }

            cout << "\n";
        }
    }

    void pattern2(int n){
        for(int i = 1 ; i <= n; i++){
            for (int j = 1; j <= i ; j++){
                cout << "*";
            }
            cout << "\n";
        }
    }

    void pattern3(int n){
        for(int i = 1 ; i <= n; i++){
            for (int j = 1; j <= i ; j++){
                cout << j <<" ";
            }
            cout << "\n";
        }
    }

    void pattern4(int n){
        for(int i = 1; i <= n ; i++){
            for(int j = 1 ;j <= i; j++ ){
                cout << i;
            } 
            cout << endl ;
        }
    }

    void pattern5(int n){
        for(int i = 1 ; i <= n ; i++ ){
            for (int j = n ; j >= i ; j--){
                cout << "*";
            }
            cout << "\n";
        }
    }


    void pattern6(int n){
        for(int i = n; i >= 1; i--){
            for (int j = 1 ; j <= i ; j++){
                cout << j;
            }
            cout << endl;
        }
    }

    void pattern7(int n){
        for (int i = 0; i < n ; i++){

            // Spaces
            for (int j = 0; j < n-i-1; j++){
                cout << " ";
            }
            // Stars
            for (int j = 0; j < 2*i+1 ; j++ ){
                cout << "*";
            }
            // Spaces
            for (int j = 0; j < n-i-1; j++){
                cout << " ";
            }
            cout << endl;
        }
    }


    void pattern8(int n){
        for (int i = 0 ; i < n; i++){
            for (int j = 0 ; j<i; j++){
                cout << " ";
            }
            for (int j = 0 ; j< 2*n-(2*i+1); j++){
                cout << "*";
            }
            for (int j = 0 ; j<i; j++){
                cout << " ";
            }
            cout << endl;
        }
    }

    void pattern9(int n){
        for(int i = 0 ; i<n ;i++){
            // Spaces
            for (int j = 0; j < n-i-1 ; j++){// as the input number of rows n = 5 - i (rows at that time in the loop for eg. 0 is the first row ) -1 will become the number of spaces
                cout << " ";
            }
            // Stars
            for (int j = 0 ; j < 2*i+1 ; j++){//as if rows i = 0 then 2*i + 1 = 1 so one star will be printed 
                cout << "*";
            }
             // Spaces
            for (int j = 0; j < n-i-1 ; j++){// as the input number of rows n = 5 - i (rows at that time in the loop for eg. 0 is the first row ) -1 will become the number of spaces
                cout << " ";
            }
            cout << endl;
        }
        for (int i = 0 ; i < n ; i++){
            // Spaces
            for (int j = 0; j < i ; j++){//number of rows i
                cout << " ";
            }
            // Stars
            for (int j = 0 ; j < 2*n-(2*i+1) ; j++){//as if rows i = 0 then 2*n = 2* i/p - (2*rows +1) i.e, if i/p = 5 so 10 - (2*i at that time + 1) 
                cout << "*";
            }
             // Spaces
            for (int j = 0; j < i ; j++){// number of rows i
                cout << " ";
            }
            cout << endl;
        }
    }


    void pattern10(int n){
        for (int i = 1 ; i <= n ; i++){
            for (int j = 1 ; j<= i ; j++){
                cout << "*";
            }
            cout << endl;
        }
         for (int i = n-1 ; i >= 1 ; i--){
            for (int j = 1 ; j<= i ; j++){
                cout << "*";
            }
            cout << endl;
        }
    }

    void pattern11(int n){
        int star = 1;
        for (int i = 0 ; i <= n-1 ; i++){
            if (i % 2 == 0) star = 1;
            else star = 0;
            for(int j = 0; j <= i; j++){
                cout << star;
                star = 1 - star;
            }
            cout<< endl;
        }
    }

    void pattern12(int n){
        int space = 2*(n-1);
        for(int i = 1 ; i <= n ; i++){
            // starting 
            for (int j = 1; j <= i ; j++){
                cout << j ;
            }
            // Spaces
            for (int j = 1 ; j <= space ;j++){
                cout << " ";
            }
            // Ending
            for (int j = i; j >=1 ; j--){
                cout << j;
            }

            cout << endl;
            space -= 2;
        }
    }

    void pattern13(int n){
        int num = 1;
        for (int i = 1 ; i <= n ; i++){
            for (int j = 1 ; j <= i ; j++){
                cout << num << " ";
                num = num + 1;
            }
            cout << endl;
        }
    }

    void pattern14(int n ){
        
        for (int i = 0 ; i <= n-1; i++){
            for (char ch = 'A'; ch <= 'A' + i  ; ch++){
                cout << ch << " ";
            }
            cout << endl;
        }
    }

    void pattern15(int n ){
        
        for (int i = 0 ; i <= n-1; i++){
            for (char ch = 'A'; ch <= 'A' + (n-i-1)  ; ch++){
                cout << ch << " ";
            }
            cout << endl;
        }
    }

    void pattern16(int n ){
        
        for (int i = 0 ; i <= n-1; i++){
            char ch = 'A' + i;
            for (int j = 0; j <= i ; j++){
                cout << ch<< " ";
            }
            cout << endl;
        }
    }

    void pattern17(int n ){
        for (int i = 0; i < n ;i++){
           
            // Space
            for (int j = 0 ; j < n-i-1; j++){
                cout << " ";
            }
            // Alphabet
            char ch = 'A';
            int breakpoint = (2*i+1)/2;
            for (int j = 1 ; j <= 2*i +1 ; j++){
                cout << ch;
                if (j <= breakpoint ) ch++;
                else ch--;
            }
            // Spaces
            // for (int j = 0 ; j < n-i-1; j++){
            //     cout << " ";
            // }
            
            cout << endl;
        }
    }

    void pattern18(int n){
        for(int i = 0; i < n; i++){
            
            for (char ch = 'A' + n - i - 1 ; ch <='A'+ n -1;ch++){
                cout << ch;
            }
            cout << endl;

        }
    }

    void pattern19(int n ){
        // Reverse
        int space = 0;
        for(int i = n ; i >= 1 ; i--){
            
            // Stars
            for(int j = i; j >= 1 ; j--){
                cout << "*";
            }
            // Spaces
            for (int j = 1 ; j <= space ; j++ ){
                cout << " ";
            }
            // Star
            for(int j = i ; j>= 1 ; j--){
                cout << "*";
            }

            cout << endl;
            space += 2;
        }

        // straight
        int spaces = 2*(n-1);
        for(int i = 1 ; i <= n ; i++){
            
            // Stars
            for(int j = 1 ; j<=i ; j++){
                cout << "*";
            }
            // Spaces
            for (int j = 1 ; j <= spaces ; j++ ){
                cout << " ";
            }
            // Star
            for(int j = 1; j <= i ; j++){
                cout << "*";
            }

            cout << endl;
            spaces -= 2;
        }
    }

    void pattern20(int n){
        int space = 2*(n-1);
        for(int i = 1 ; i < n ;i++){
            // Stars
            for(int j = 1 ; j <= i ; j++){
                cout << "*";
            }
            // Spaces
            for(int j = 1 ; j <= space ;j++){
                cout << " ";
            }
            // Stars
            for(int j = 1 ; j <= i; j++){
                cout << "*";
            }

            cout << endl;
            space -= 2;
        }

        int spaces = 0 ;
        
        for (int i = n; i >= 1 ; i--){
            // Stars
            for(int j = i ; j >= 1 ; j--){
                cout << "*";
            }
            // Spaces
            for (int j = 1 ; j <= spaces; j++){
                cout << " ";
            }
            // Stars
            for(int j = i ; j >= 1; j--){
                cout << "*";
            }

            cout << endl;
            spaces += 2;
        }
    }

    void pattern21(int n ){
        for(int i = 0 ; i < n; i++){
            for(int j = 0 ; j < n ; j++ ){
                if ( i == 0 || j == 0 || i == n-1 || j == n-1) {
                    cout << "*" ;
                }
                else cout << " ";
            }
            cout << endl;
        }
    }


};


int main (){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    Patterns ptrn;
    // ptrn.pattern1(n);
    // ptrn.pattern2(n);
    // ptrn.pattern3(n);
    // ptrn.pattern4(n);
    // ptrn.pattern5(n);
    // ptrn.pattern6(n);
    // ptrn.pattern7(n);
    // ptrn.pattern8(n);
    // ptrn.pattern9(n);
    // ptrn.pattern10(n);
    // ptrn.pattern11(n);
    // ptrn.pattern12(n);
    // ptrn.pattern13(n); 
    // ptrn.pattern14(n); 
    // ptrn.pattern15(n); 
    // ptrn.pattern16(n); 
    // ptrn.pattern17(n); 
    // ptrn.pattern18(n); 
    // ptrn.pattern19(n); 
    // ptrn.pattern20(n); 
    // ptrn.pattern21(n);
    ptrn.pattern22(n);
    
}