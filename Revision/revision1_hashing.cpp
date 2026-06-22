# include <bits/stdc++.h>
using namespace std;

void frequencyCount(int arr[], int n){

    int hash[20] = {0};

    for(int i = 0; i < n; i++){
        hash[arr[i]]+=1;
    }

    int query;
    cout << "Enter the number of queries: ";
    cin >> query;
    cout << "Enter the element for query: ";

    while(query--){
        int number;
        cin >> number;

        cout << number << " appears " << hash[number] << " times." << endl;
    }
}

void character(string s){
    
    int hash[26]={0};
    for (int i = 0 ; i < s.size(); i++){
        hash[s[i] - 'a'] += 1;
    }

    int query;
    cout << "Enter the number of queries: ";
    cin >> query;
    cout << "Enter the element for query: ";

    while(query--){
        char character;
        cin >> character;

        cout << character << " appears " << hash[character - 'a'] << " times." << endl;
    }
}

void mapp(int arr[], int n){
    map<int,int> mp;
    for (int i = 0; i < n; i++){
        mp[arr[i]]++;
    }

    int query;
    cout << "Enter the number of queries: ";
    cin >> query;
    cout << "Enter the element for query: ";

    while(query--){
        int number;
        cin >> number;

        cout << number << " appears " << mp[number] << " times." << endl;
    }
}


int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: " << endl;
    for(int i = 0 ; i<n ; i++){
        cin >> arr[i];
    }
    frequencyCount(arr,n); 

    string s;
    cout << "Enter the string: ";
    cin >> s;
    character(s);
    mapp(arr,n);
    
    return 0;
}
