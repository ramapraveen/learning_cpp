#include <iostream>

using std::cout;
using std::endl;

template <class T = char *>
void func() {
	cout<<__PRETTY_FUNCTION__<<endl;
}

int main() {
	func<int>(); //[T = int]
	//XXX below ones without default param(char *) it would be error because cant deduce
	func<>(); //[T = char *]
	func(); //[T = char *]
}
