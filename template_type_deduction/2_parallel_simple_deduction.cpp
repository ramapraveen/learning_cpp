#include <iostream>

using std::cout;
using std::endl;

template <class T, class U>
void f(T x, U y) {
	cout<<__PRETTY_FUNCTION__<<endl;
}

template <class T>
void g(T x, T y) {
	cout<<__PRETTY_FUNCTION__<<endl;
}
int main() {
	f(1, 2); //void f(T, U) [T = int, U = int]
	g(1, 2); //void g(T, T) [T = int]
	g(1, 2u); // error: deduced conflicting types for parameter
     		  // 'T' ('int' vs. 'unsigned int')
}
