# include <bits/stdc++.h>
using namespace std;

void ExplainPair(){
    pair<int,int> p = {1,3};
    cout << p.first << " "<< p.second << endl;

    pair<int,pair<int,int>> p1 = {5,{2,6}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    pair <int,int> arr[] = {{1,2},{5,6},{9,8},{3,7}};  // there are 4 pair elements in this array indexes are 0,1,2,3 
    cout << arr[2].second << endl; // for arr[2].second it will go to the array of index 2 and the seconde element of the array on index 2.

    pair<int,pair<int,int>> arr1[] = {{1,{3,5}},{2,{4,6}}};
    cout << arr1[1].second.first << endl;
}

void ExplainVector(){
    // Vector : it is an dynamic container 
    // push_back():- insert element 
    // emplace_back(): Dynamically increases the size of vector and pushes the element to the vectorsame sa push_back()

}
int main (){
    // ExplainPair();
    ExplainVector();
    
    return 0;
}