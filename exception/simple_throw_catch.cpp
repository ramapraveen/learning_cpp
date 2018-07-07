
#include <iostream>

class MyError {
	const char *data;
public:
	MyError(const char *msg) : data(msg) {}
};

void f() {
	throw MyError("something bad happened");
}

int main() {
	f();
}
