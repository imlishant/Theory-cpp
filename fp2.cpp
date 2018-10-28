#include <bits/stdc++.h>
using namespace std;

void Printvalue(int a)
{
    cout << "Values :: " <<  a <<  endl;
}

void Foreach(vector<int> &vector_name, void(*func)(int))    // func = &Printvalue
{
    for(int i : vector_name)
    {
        func(i);
    }
}

int main() {
    
    vector<int> values = { 1, 2, 3, 4, 5 };
    Foreach(values, Printvalue);
	return 0;
}
