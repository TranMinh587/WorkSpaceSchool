#include"iostream"
using namespace std;

class Gach {
	private :
		string maSo;
		string mau;
		int soVienTrongHop;
		int chieuDai;
		int chieuNgang;
		long giaBan;
		
	public :
		Gach() {
			maSo = "";
			mau = "";
			soVienTrongHop = 0;
			chieuDai = 0;
			chieuNgang = 0;
			giaBan = 0;
		}
		
		Gach(string ms, string m, int svth, int cd, int cn, long gb) {
			maSo = ms;
			mau = m;
			soVienTrongHop = svth;
			chieuDai = cd;
			chieuNgang = cn;
			giaBan = gb;
		}
		
		Gach(Gach &a) {
			maSo = a.maSo;
			mau = a.mau;
			soVienTrongHop = a.soVienTrongHop;
			chieuDai = a.chieuDai;
			chieuNgang = a.chieuNgang;
			giaBan = a.giaBan;
		}
		
		void nhapGach() {
			cout << "----- Nhap gach -----\n";
			cout << "Nhap vao ma so : ";
			cin >> maSo;
			cout << "Nhap vao mau : ";
			cin >> mau;
			cout << "Nhap vao so vien trong hop : ";
			cin >> soVienTrongHop;
			cout << "Nhap vao chieu dai : ";
			cin >> chieuDai;
			cout << "Nhap vao chieu ngang : ";
			cin >> chieuNgang;
			cout << "Nhap vao gia ban : ";
			cin >> giaBan;
		}
		
		void xuatGach() {
			cout << "----- Xuat gach -----";
			cout << "\nMa so : " << maSo;
			cout << "\nMau : " << mau;
			cout << "\nSo vien trong hop : " << soVienTrongHop;
			cout << "\nChieu dai : " << chieuDai;
			cout << "\nChieu ngang : " << chieuNgang;
			cout << "\nGia ban : " << giaBan;
		}
		
		double giaBanLe() {
			return ((double)giaBan/soVienTrongHop)*(1.2);
		}
};

int main() {
	Gach a;
	cout << "Gach a khi khoi tao : \n";
	a.nhapGach();
	a.xuatGach();
	cout << "\nGia ban le : " << a.giaBanLe();
}
