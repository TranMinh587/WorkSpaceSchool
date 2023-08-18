#include"iostream"
using namespace std;

void nhap(int *a) {
	cin >>*a;
}

void nhap2(int &a) {
	cin >>a;
}

int main() {
	int a, b;
	nhap(&a);
	nhap2(b);
	cout << a;
	cout << b;
}
