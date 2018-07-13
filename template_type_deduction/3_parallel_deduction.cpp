#include <iostream>
#include <array>

using std::cout;
using std::endl;

template <class T, class U>
void func(std::array<T, sizeof(U)> x,
	std::array<U, sizeof(T)> y) {
	cout<<__PRETTY_FUNCTION__<<endl;
}

int main() {
	func(std::array<int, 8>{}, std::array<double,4>{}); //[T = int, U = double]
	func(std::array<int, 9>{}, std::array<double,4>{}); //error: see below
		//[T = int, U= double]. but sizeof(double) aka 8>' of 1st parameter 
		// does not match adjusted type 'array<[...], 9>' of argument
}
