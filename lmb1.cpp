#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
/*                                        
void Printvalue(int a)                            // instead made use of lambda function.
{
    cout << "Values :: " <<  a <<  endl;
}
*/

void Foreach(vector<int> &vector_name, void(*func)(int))    // func = &Printvalue
{
    for(int i : vector_name)
    {
        func(i);
    }
}

int main() {
    
    vector<int> values = { 1, 2, 3, 4, 5 };
    Foreach(values, [](int a){cout << " Values :: " << a << endl;}); // lambda function. [] == capture method
    
	return 0;
}
