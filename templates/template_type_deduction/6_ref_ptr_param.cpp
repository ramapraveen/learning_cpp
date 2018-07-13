#include <iostream>

using std::cout;
using std::endl;

template <class T>
void f(T *x) {
	cout<<__PRETTY_FUNCTION__<<endl;
}

template <class T>
void g(T& x) {
	cout<<__PRETTY_FUNCTION__<<endl;
}

template <class T>
void h(T&& x) {
	cout<<__PRETTY_FUNCTION__<<endl;
}

int main() {
	int i;
	f(&i); //x is int* ==> [T = int]
	g(i); // x in int& ==> [T = int]
	h(4); // x in int&& ==> [T = int]
	h(std::move(i)); // ditto: x in int&& ==> [T = int]
}
