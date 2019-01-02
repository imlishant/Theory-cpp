#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void mapDemo()
{   // A.find(key) and A.erase(key) in log(N)
    map<int, int> A;
    A[1] = 100;
    A[2] = 23;
    A[234] = 87;
    A[199934] = 9834;
    
    map<char, int> cnt;
    string x = "lishtant sahu";
    
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
    // C++ STL
    PowerofSTL();
}
