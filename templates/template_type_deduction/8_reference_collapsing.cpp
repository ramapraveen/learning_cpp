#include <iostream>

using std::cout;
using std::endl;

template <class T>
void func(T&& x) {
	cout<<__PRETTY_FUNCTION__<<endl;
	int y;
	T& z=y; //int& & => int &, so z is int &
	T&& w=y; //int& && => int &, so w in int &
}

int main() {
	int i;
	func<int &>(i);
}
