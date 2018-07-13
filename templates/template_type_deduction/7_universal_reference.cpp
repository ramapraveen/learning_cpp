#include <iostream>

using std::cout;
using std::endl;

template <class T>
void func(T&& x) {
	cout<<__PRETTY_FUNCTION__<<endl;
}

int main() {
	int i;
	func(i); //x is int& so, [T = int&] 
		//x can't be int&& (int&& && --> int&&).  but we are not passing RValue ref here
	func(std::move(i)); //x is int&& so, [T = int]
}
