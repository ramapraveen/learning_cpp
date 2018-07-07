
#include <iostream>

using namespace std;

class MyError {
public:
	const char *data;
	MyError(const char *msg) : data(msg) {}
};

class Rainbow {
public:
	Rainbow() { std::cout<<"In Raibow constructor"<<endl; }
	~Rainbow() { std::cout<<"In Raibow destructor"<<endl; }
};

void a() {
	Rainbow rb;
	throw MyError("something bad happened");
}

void b() {
	try {
		a();
	} catch(...) {
		cout<<"in b exception happened, rethrowing"<<endl;
		throw; //XXX exception is preserved for main to see it
	}
}

int main() {
	try {
		b();
	} catch (MyError &err) {
		cout <<err.data<<endl;
	}
	cout<<"after try catch block"<<endl;
	return 0;
}

/*
	Output:

In Raibow constructor
In Raibow destructor
in b exception happened, rethrowing
something bad happened
after try catch block
*/
