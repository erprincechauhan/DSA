// WAP to prince ages as adult or not adult by taking age as input

# include <iostream>
using namespace std;

// int main (){

//     int age;
//     cout << "Enter the age : ";
//     cin >> age;

//     if (age >= 18){
//         cout << "Adult" << endl;
//     }
//     else {
//         cout<< "Not Adult" << endl;
//     }
//     return 0;
// }


/*
A school has following rules for grading system 
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A

Ask the user to enter marks and print the corresponding age

*/

// int main(){
//     int marks;

//     cout << "Enter your marks : " ;
//     cin >> marks;


//     if (marks > 100){
//         cout << "Invalid ! Enter the marks in the range 0 - 100.";
//     }

//     else if (marks < 25){
//         cout << "F";
//     }

//     else if (marks <= 44 ){
//         cout << "E";
//     }

//     else if (marks <= 49){
//         cout << "D";
//     }

//     else if (marks <= 59){
//         cout << "C";
//     },

//     else if (marks <= 79){
//         cout << "B";
//     }

//     else if (marks <= 100){
//         cout << "A";
//     }

//     return 0;
// }



// ARRAYS 


// int main (){
//     // int arr[5]; 1-D Array
//     int arr[2][5] = {{1,3,4,2,9},{8,7,6,5,0}};

    
//     // for (int j=0 ; j < 5 ; j++){
//     //     cout << "Enter the element: \n";
//     //     cin >> arr[j];
//     // }

//     cout << "Array elements are: ";
//     for(int j = 0 ; j < 2 ; j++){
//         for (int i = 0; i < 5; i++){
//             cout << arr[j][i] <<", " ;
//         }
        
//         cout << endl;
//     }

//     return 0;
// }


// For Loops

int main (){
    int i ,j;
    for ( i = 0 ; i <= 5 ; i++){

        cout<<" \n";

        for(j = 0 ; j <= i; j++){
            cout << "*";
        }

    }
    for(i = 0 ; i <= 5 ; i++){
        
        cout << " \n";
        for (j = 4; j >= i ; j--){
            cout << "*";
        }   
    }
    return 0;
}



