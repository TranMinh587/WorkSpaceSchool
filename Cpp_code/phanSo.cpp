#include"iostream"
using namespace std;

int gcd(int a, int b) {
	if(a==0 || b==0) {
		return a+b;
	}
	while(a!=b) {
		if(a>b) {
			a = a - b;
		}else {
			b = b - a;
		}
	}
	return a;
} 

class PhanSo {
	private :
		int tu;
		int mau;
		
	public :
		PhanSo() {
			tu = 1;
			mau = 1;
		}
		
		PhanSo(int atu, int amau) {
			tu = atu;
			mau = amau;
		}
		
		PhanSo(PhanSo& a) {
			tu = a.tu;
			mau = a.mau;
		}
		
		int getTuSo() {
			return tu;
		}
		
		int getMauSo() {
			return mau;
		}
		
		void setTuSo(int a) {
			tu = a;
		}
		
		void setMauSo(int b) {
			mau = b;
		}
		
		void nhapPhanSo() {
			cout << "Nhap vao phan so\n";
			cout << "Nhap tu : ";
			cin >> tu;
			cout << "Nhap mau : ";
			cin >> mau;
		}
		
		void xuatPhanSo() {
			
			if(tu == 0) {
				cout << "0";
			}
			else if(mau == 1) {
				cout << tu;
			}
			else {
				cout << tu << "/" << mau;
			}
			
			
		}
		
		void toiGianPhanSo() {
			int uocChung = gcd(getTuSo(), getMauSo());
			tu = tu/uocChung;
			mau = mau/uocChung;
		}
		
		void nghichDao() {
			int temp;
			temp = tu;
			tu = mau;
			mau = temp;
		}
		
		double giaTriThuc() {
			return (double)tu/mau;
		}
		
		bool lonHon(PhanSo a) {
			return (this->giaTriThuc()>a.giaTriThuc())?true:false;
		}
		
		void cong(PhanSo a) {
			a.toiGianPhanSo();
			this->toiGianPhanSo();
			int tu1 = tu, mau1 = mau;
			tu = tu * a.mau;
			mau = mau * a.tu;
			a.tu = a.tu * mau1;
			a.mau = a.mau * tu1;
			tu = tu + a.tu;
			mau = mau + a.mau;
			this->toiGianPhanSo();
		}
		
		void cong(int a) {
			a = a*mau;
			tu = tu + a;
		}
		
		void tru(PhanSo a) {
			a.toiGianPhanSo();
			this->toiGianPhanSo();
			int tu1 = tu, mau1 = mau;
			tu = tu * a.mau;
			mau = mau * a.tu;
			a.tu = a.tu * mau1;
			a.mau = a.mau * tu1;
			tu = tu - a.tu;
			toiGianPhanSo();
		}
		
		void tru(int a) {
			a = a*mau;
			tu = tu - a;
			toiGianPhanSo();
		}
		
		void nhan(PhanSo a) {
			tu = tu*a.tu;
			mau = mau*a.mau;
			toiGianPhanSo();
		}
		
		void nhan(int a) {
			tu = tu*a;
			toiGianPhanSo();
		}
		
		void chia(PhanSo a) {
			tu = tu * a.mau;
			mau = mau *a.tu;
			this->toiGianPhanSo();
		}
		
		void chia(int a) {
			tu = tu * 1;
			mau = mau * a;
			this->toiGianPhanSo();
		}
};



int main() {
	PhanSo a;
	a.nhapPhanSo();
	a.toiGianPhanSo();
	a.xuatPhanSo();
	cout << "\n";
	PhanSo b(2,2);
	a.tru(b);
	cout << "\n";
	a.xuatPhanSo();
	cout << "\n";
	cout <<"Gia tri thuc : " << a.giaTriThuc();
}
