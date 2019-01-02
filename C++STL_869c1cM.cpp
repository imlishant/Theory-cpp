#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

bool f(int x, int y){
    return x > y;
}

void vectorDemo()
{
    vector<int> A = {14, 23, 98, 12, 34};
    cout << A[1];
    sort(A.begin(), A.end()); // O(Nlog(N))
    // 12, 14, 23, 34, 98
    bool present = binary_search(A.begin(), A.end(), 14); // true // O(logN)
    present = binary_search(A.begin(), A.end(), 4); // false
    A.push_back(100);
    present = binary_search(A.begin(), A.end(), 100); // true
    // 12, 14, 23, 34, 98, 100
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(54);
    // 12, 14, 23, 34, 98, 100, 100, 100, 100, 100, 54;
    vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100); // >=
    vector<int>::iterator it1 = upper_bound(A.begin(), A.end(), 100); // >
    
    cout << *it << " " << *it1 << "\n";
    cout << it1 - it << "\n";
    
    sort(A.begin(), A.end(), f); // f is function parameter
    vector<int>::iterator it2;
    for(it2 = A.begin(); it2 != A.end(); it2++){
        cout << *it2 << " ";
    }
    /*
    auto it
    for(int x : A){
        cout << x << " ";
    }
    */
    cout << endl;
    
}

void setDemo()
{
    set<int> S;
    S.insert(23);
    S.insert(78);
    S.insert(3);
    S.insert(2);
    for(int x : S){
        cout << x << " ";
    }
    cout << endl;
    // 2, 3, 12, 78
    auto it = S.find(23);       // log(N)
    if(it == S.end()){
        cout << "oops! not present... \n";
    }
    else{
        cout << " It's present.";
    }
    auto it2 = S.lower_bound(12);
    auto it3 = S.lower_bound(11);
    cout << *it2 << " " << *it3;
    
    auto it4 = S.upper_bound(78);
    if(it4 == S.end()){
        cout << "oops! not found..";
    }
    else cout << endl << *it4 ;
    // can erase S.erase(key) in log(N)
    
}

void mapDemo()
{   // A.find(key) and A.erase(key) in log(N)
    map<int, int> A;
    A[1] = 100;
    A[2] = 23;
    A[234] = 87;
    A[199934] = 9834;
    
    map<char, int> cnt;
    string x = "lishant sahu";
    
    for(char c : x){
        cnt[c]++;
    }
    cout << "a = " << cnt['a'] << "; z = " << cnt['z'] << "\n"; 
}

void PowerofSTL()
{
    /*
    add[2, 3]
    add[10, 20]
    add[30, 400]
    add[401, 500] */
    set<pair<int, int>> S;
    S.insert({401, 500});
    S.insert({10, 20});
    S.insert({30, 400});
    S.insert({2, 3});
    
    int point = 50; // 1, 623, 10==10
    auto it = S.upper_bound({point, INT_MAX});
        // compare :: {a, b} & {c, d}
        // (a < c) OR (a == c and b < d)    SMALLER PAIR
    if(it == S.begin()){
        cout << " oops! not found....." << "\n";
        return;
    }
    it--;
    pair<int, int> current = *it;
    if(current.first <= point && point <= current.second){
        cout << "yes! it is present in the interval " << current.first << ", " << current.second << "\n";
    }
    else{
        cout << "oops! not found in the given interval..." << "\n";
    }
    
}

int main()
{
    
    //PowerofSTL();
    //mapDemo();
    //vectorDemo();
    //setDemo();
}
