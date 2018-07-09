#include <iostream>

using namespace std;

class BaseException {
public:
	BaseException() { cout<<"in BaseException"<<endl; }
};

//XXX note public inheritance is needed
class DerivedException : public BaseException {
public:
	DerivedException() { cout<<"in DerivedException"<<endl; }
};

void f() {
	cout<<"in f"<<endl;
	throw DerivedException();
}

int main() {
	try {
		f();
	} catch(BaseException &b) {
		cout<<"rama caught base exception"<<endl;
	} catch(...) {
		cout<<"caught other exception"<<endl;
	}
}

/*
output: XXX look at note
in f
in BaseException
in DerivedException
rama caught base exception
*/
