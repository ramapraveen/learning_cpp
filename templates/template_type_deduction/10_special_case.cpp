#include <iostream>
#include <typeinfo>

using std::cout;
using std::endl;

template <class T>
void func(T& x) {
	cout<<__PRETTY_FUNCTION__<<endl;
	cout<<&x<<endl;
}

int main() {

	//int j = 1;
	//func(std::move(j)); //error: because T can't be int. int& && => int& but passing int&&

	const int i = 1;
	func(std::move(i)); //[T = const int] and x -> const int & :O :O,
		// this is special case works only with const lvalue
		// works because rvalue kind of like const lvalue

	
}
