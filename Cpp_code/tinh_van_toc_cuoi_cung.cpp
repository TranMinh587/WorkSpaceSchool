#include"iostream"
using namespace std;

int main() {
	double v, u, a, deltaT;
	/* 
	v : Van toc cuoi cung
	u : Van toc ban dau
	a : Gia toc
	deltaT : Khoang thoi gian gia toc truoc khi roi xuong mat dat
	v = u + a*deltaT
	*/
	cout << "Nhap vao van toc ban dau, gia toc va khoang thoi gian : ";
	cin >> u >> a >> deltaT;
	cout << "Van toc cuoi cung : "<< u + (a * deltaT);
	
}
