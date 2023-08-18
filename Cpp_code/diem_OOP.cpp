#include"iostream"
using namespace std;

class Diem {
	private :
		int x;
		int y;
	public :
		Diem() {
			x = 0;
			y = 0;
		}
		
		Diem(int x1, int y1) {
			x = x1;
			y = y1;
		} 
		
		Diem(Diem &a) {
			x = a.x;
			y = a.y;
		}
		
		void nhapDiem() {
			cout << "Nhap x : ";
			cin >> x;
			cout << "Nhap y : ";
			cin >> y;
		}
		
		void xuatDiem() {
			cout << "(" << x << "," << y << ")";
		}
		
		
};

int main() {
	
}
