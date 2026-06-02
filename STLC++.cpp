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

    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.emplace_back(25);
    v.emplace_back(56);
    // for(vector<int>::iterator it = v.begin(); it != v.end(); it++){ // by using this we can iterate through the whole vector
    //     // it++; // it printes the value at index 1
    //     cout << *(it) << " "; 
    // }

    for (auto it = v.begin(); it!= v.end(); it++ ){
        cout << *(it) << endl;
    }

    if(v.empty()) cout << "Vector is empty." << endl;
    else cout << "Vector is not empty";

    cout << "\nSize of vector: "<< v.size(); // size of vector 
    v.clear();

    cout << "\nSize after clearing the vector: "<< v.size();

}


void ExplainList()
{
    list<int> li;
    list<int>::iterator it;
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    li.push_back(10);
    li.push_back(20);
    li.push_front(30);
    li.push_front(40);
    li.push_front(50);
    
    cout<<"The elements in the list are: ";
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<"Reversing the list: ";
    li.reverse();

    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<"Sorting the list: ";
    li.sort();

    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<"The size of the list is: "<<li.size()<<endl;
    cout<<"The first element in the list: "<<li.front()<<endl;
    cout<<"Deleting the first element"<<endl;

    li.pop_front();
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<"The last element of the list: "<<li.back()<<endl;
    cout<<"Deleting the last element"<<endl;

    li.pop_back();
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<" ";
    }
    
}

void ExplainDeque()
{
    deque<int> dq;
    deque<int>::iterator it;

    for(it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }
    
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.push_front(50);
    
    cout<<"The elements in the deque are: ";
    for(it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }
    
    cout<<"The size of the deque is: "<<dq.size()<<endl;
    cout<<"The first element in the deque: "<<dq.front()<<endl;
    cout<<"Deleting the first element"<<endl;

    dq.pop_front();
    for(it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<"The last element of the deque: "<<dq.back()<<endl;
    cout<<"Deleting the last element"<<endl;

    dq.pop_back();
    for(it=dq.begin();it!=dq.end();it++)
    {
        cout<<*it<<" ";
    }  
}


//  Associative Containers
void ExplainSet() {
    set < int > s;
    for (int i = 1; i <= 10; i++) {  //Iterate through 10 and insert the value of i in the set
        s.insert(i);
    }

    cout << "Elements present in the set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << * it << " ";  //If element is found print it
    }
    cout << endl;
    int n = 2;
    if (s.find(2) != s.end())
        cout << n << " is present in set" << endl;  //Print the element
    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << * it << " ";
    }
    cout << endl;

    cout << "The size of the set is: " << s.size() << endl;  ///Return the size of the set

    if (s.empty() == false)
        cout << "The set is not empty " << endl;  //If set is not empty and elements are still present in it
    else
        cout << "The set is empty" << endl;  //If set is empty
    s.clear();
    cout << "Size of the set after clearing all the elements: " << s.size();
}

void ExplainMultiset() {
    // Declare a multiset of integers
    multiset<int> s;

    // Insert elements 1 to 10
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }

    // Insert a duplicate element
    s.insert(5);

    // Display elements in the multiset (ordered automatically)
    cout << "Elements present in the multiset: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Search for a specific element (2 in this case)
    int n = 2;
    if (s.find(2) != s.end())
        cout << n << " is present in multiset" << endl;
    // Erase the first element
    s.erase(s.begin());

    // Display elements after deletion
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Display the size of the multiset
    cout << "The size of the multiset is: " << s.size() << endl;

    // Check if the multiset is empty
    if (!s.empty())
        cout << "The multiset is not empty" << endl;
    else
        cout << "The multiset is empty" << endl;

    // Clear all elements
    s.clear();

    // Display size after clearing
    cout << "Size of the multiset after clearing: " << s.size();
}

void ExplainMap() {
    map < int, int > mp;
    for (int i = 1; i <= 5; i++) {
        mp.insert({i , i * 10});
    }

    cout << "Elements present in the map: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it -> first << "\t" << it -> second << endl;
    }

    int n = 2;
    if (mp.find(2) != mp.end())
        cout << n << " is present in map" << endl;

    mp.erase(mp.begin());
    cout << "Elements after deleting the first element: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it -> first << "\t" << it -> second << endl;
    }

    cout << "The size of the map is: " << mp.size() << endl;

    if (mp.empty() == false)
        cout << "The map is not empty " << endl;
    else
        cout << "The map is empty" << endl;
    mp.clear();
    cout << "Size of the map after clearing all the elements: " << mp.size();
}


void ExplainMultimap() {

    multimap < int, int > mp;

    for (int i = 1; i <= 5; i++) {  //Iterate in the map till 5
        mp.insert({i , i * 10});  //Insert elements from i to i*10
    }
    mp.insert({4,40}); 

    cout << "Elements present in the multimap: " << endl;  //Print the elements in the map
    cout << "Key\tElement" << endl;  //Print the keys in the map

    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it -> first << "\t" << it -> second << endl;  //Print it.first and second from the map
    }

    int n = 2;

    if (mp.find(2) != mp.end())
        cout << n << " is present in multimap" << endl;  //If element in found

    mp.erase(mp.begin());

    cout << "Elements after deleting the first element: " << endl;
    cout << "Key\tElement" << endl;

    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it -> first << "\t" << it -> second << endl;
    }

    cout << "The size of the multimap is: " << mp.size() << endl;

    if (mp.empty() == false)
        cout << "The multimap is not empty " << endl;  //If map is not empty
    else
        cout << "The multimap is empty" << endl;  //If map is empty

    mp.clear();

    cout << "Size of the multimap after clearing all the elements: " << mp.size();  //Print the size of the map

}

int main (){
    ExplainPair();
    ExplainPair();
    ExplainList();
    ExplainDeque();
    ExplainSet();
    ExplainMultiset(); 
    ExplainMap(); 
    ExplainMultimap(); 


    return 0;
}




