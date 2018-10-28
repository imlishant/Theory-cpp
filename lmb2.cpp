#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>   // to access function<return_type(data_type)>
                        // [], [a], [&a], [=], [&]
using namespace std;
/*
void Printvalue(int para)
{
    cout << "Values :: " <<  para <<  endl;
}
*/

void Foreach(vector<int> &vector_name, const function<void(int)>& func)   
{
    for(int i : vector_name)
    {
        func(i);
    }
}

int main() {
    
    vector<int> values = { 1, 2, 3, 4, 5 };
    int var = 1234;
    Foreach(values, [&var](int para){cout << " Values :: " << para << " : " << var << endl;});
	return 0;
}
