#include <iostream>

using std::cout;
using std::endl;

template <class T>
void func(T&& x) {
	cout<<__PRETTY_FUNCTION__<<endl;
}

int main() {
	const int i = 1;
	func(i); //x is const int &, so [T = const int &]
	func(std::move(i)); //x is const int &&, so [T = const int]
}
