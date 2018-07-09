#include <iostream>

using namespace std;

class BaseException {
public:
	BaseException() { cout<<"in BaseException"<<endl; }
};

/* XXX note public inheritance is needed
 * if not, its equivalant to private inheritance,
 * in private inheritance. 
 * for DeriveException d; BaseException &b = d; below is the error
 * error: cannot cast 'DerivedException' to its private base class 'BaseException'
 * The language doesn't allow you to refer to a derived class from a private base
*/

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
