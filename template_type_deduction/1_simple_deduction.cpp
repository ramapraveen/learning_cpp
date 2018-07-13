#include <iostream>

using std::cout;
using std::endl;

template <class T>
void func(T param) {
	cout<<__PRETTY_FUNCTION__<<endl;
}

int main() {
	func(4); //void func(T) [T = int]
	func(4.2); //void func(T) [T = double]
	func("text"); //void func(T) [T = const char *]
}
