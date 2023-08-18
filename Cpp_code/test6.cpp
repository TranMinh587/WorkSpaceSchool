#include"iostream"
using namespace std;

class Diem {
	private :
		int x;
		int y;
		
	public :
		Diem() {
			this->x = 0;
			this->y = 0;
		}
		
		Diem(int ax, int ay) {
			this->x = ax;
			this->y = ay;
		}
		
		void nhapDiem() {
			cin >> x;
			cin >> y;
		} 
		
		void inDiem(){
			cout << "(" << x << "," << y << ")";
		}
};

int main() {
	Diem a;
	Diem b = new Diem();
	a.nhapDiem();
	a.inDiem();
	b.inDiem()
}
