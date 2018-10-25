#include <bits/stdc++.h>
using namespace std;

void HelloWorld(){
    cout << "Hi, Hello World" << "\n";
}

int main() {
	
	auto function = HelloWorld;
	auto func = HelloWorld;
	void(*funct)() = HelloWorld;
	auto function1 = &HelloWorld;
	function();
	func();
	funct();
	function1();
	return 0;
}
