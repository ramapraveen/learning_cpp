#include <iostream>

using std::cout;
using std::endl;

template <class T, class U>
void func(T x, U y) {
	cout<<__PRETTY_FUNCTION__<<endl;
}

int main() {
	func<int, int>('x', 3.1); //[T = int, U = int]
	func<int>('x', 3.1); //[T = int, U = double]
	func<>('x', 3.1); //[T = char, U = double]
	func('x', 3.1); //[T = char, U = double]
}
