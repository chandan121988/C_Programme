#include <iostream>
using namespace std;

class A {
	int a;
public:
	void show()
	{
		cout << "Hello from A \n";
		cin >> a;
		cout << "Enter value of a \n"<<a;
	}
};

class B : public virtual A {
};

class C : public virtual A {
};

class D : public B, public C {
};

int main()
{
	D object;
	object.show();
}
