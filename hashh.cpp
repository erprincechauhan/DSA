# include <bits/stdc++.h>
using namespace std;

int main (){

    // // For integers
    // int n;
    // cout << "Enter the number of elements in array: ";
    // cin >> n ;
    
    
    // int arr[n];
    // cout << "Enter the elements of array: " << endl;
    // for (int i = 0; i < n ; i++){
    //     cin >> arr[i];
    // }

    // // Pre-Compute the elements of array. so the accessing the element will only take O(1).

    // int hash[20] = {0};  // here hash[20] means there are 20 elements in hash no matter what 
    // // the size of hash depends on array here we are assuming that max of size of array is 20.
    // for (int i = 0; i < n ; i++){
    //     hash[arr[i]] += 1;   // it increases the count (frequency) as the array element appears it updates it to +1.
    // }

    // int query;

    // cout << "Enter the number of queries: ";
    // cin >> query ; 
    
    // cout << "Enter the query: "<< endl;
    // while (query--){
    //     int number; // queries which are the real queries
    //     cin >> number;

    //     // Fetch 
    //     cout << number << " appears "<< hash[number] << " times." << endl;
    // }


"""
For characters (lower case) ASCII From 97
CASE 1: when we have only 'LOWER CASE' or 'UPPER CASE' values.

"""
    // string s;
    // cout << "Enter the string: " ;
    // cin >> s;

    // int hash[26] = {0};  // we can also take is 256 which covers all ASCII characters.
    // // Pre-computation 
    // for (int i = 0; i < s.size(); i++){
    //     hash[s[i]-'a']++; // simply hash[s[i]]++ would work for 256 size hash 
    //     //  here we are doing 'a' - 'a' = 0 , 'b' - 'a' = 1 according to ASCII character. to get numbers.
    //     // 'a'(97) - 'a'(97) = 0 |  'b' (98) - 'a' (97) = 1 and so on... till 'z'(122) - 'a' (97) = 25.
    // }

    // int query;

    // cout << "Enter the number of queries: ";
    // cin >> query;
    // cout << "Enter the characters: ";

    // while (query--){
    //     char c;
    //     cin >> c;

    //     // Fetch
    //     cout << hash[c -'a'] << endl;  // hash[c] would work if we take 256 hash size.
    //     //  here we are doing character - 'a' so we get the index of that character as,
    //     // c = f then, 'f' (102) - 'a'(97) = 5 after that it is fetching the value of index 5 i.e, how many times f appeared.
    // }


    """
    MAP 
    
    """

    // int n ;
    // cout << "Enter the number of array elementa: ";
    // cin >> n;

    // map<int,int> mp;

    // for (int i = 0 ; i < n ; i++ ){
    //     cin >> arr[i];
    //     mp[arr[i]]++;
    // }

    // int query;
    // cout << "Enter the number of queries: ";
    // cin >> query;
    // cout << "Enter the numbers: " << endl;
    // while (query--){
    //     int numbers;
    //     cin >> numbers;
    //     // fetch 

    //     cout << mp[numbers] << endl;
    // } 

    return 0;
}