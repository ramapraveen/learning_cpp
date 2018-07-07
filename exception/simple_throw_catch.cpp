
#include <iostream>

using namespace std;

class MyError {
	const char *data;
public:
	MyError(const char *msg) : data(msg) {}
};

class Rainbow {
public:
	Rainbow() { std::cout<<"In Raibow constructor"<<endl; }
	~Rainbow() { std::cout<<"In Raibow destructor"<<endl; }
};

void f() {
	Rainbow rb;
	throw MyError("something bad happened");
}

int main() {
	try {
		f();
	} catch (MyError err) {
		cout << "exception caught"<<endl;
	}
	cout<<"after try catch block"<<endl;
	return 0;
}

/*
	Output:

In Raibow constructor
In Raibow destructor
exception caught
after try catch block
*/
