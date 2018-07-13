#include<iostream>

using std::cout;
using std::endl;

template <class T>
T abs(T x) {
	return (x >=0 ) ? x : -x;
}

//XXX this is template specialization for where T->int
template<>
int abs<>(int x) {
	if (x == INT_MIN) throw std::domain_error("holly");
	return (x >=0 ) ? x : -x;
}
