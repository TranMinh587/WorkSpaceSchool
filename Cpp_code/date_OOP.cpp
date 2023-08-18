#include"iostream"
using namespace std;

class Date {
	private :
		int ngay;
		int thang;
		int nam;
	
	public :
		Date() {
			ngay = 1;
			thang = 1;
			nam = 1;
		}
		
		Date(int ngayValue, int thangValue, int namValue) {
			this->ngay=ngayValue;
			this->thang=thangValue;
			this->nam=namValue;
		}
		
		Date(const Date& otherDate) {
	        ngay = otherDate.ngay;
	        thang = otherDate.thang;
	        nam = otherDate.nam;
    	}
    	
    	int getNgay(){
			return ngay;
		}
		int getThang(){
			return thang;
		}
		int getNam(){
			return nam;
		}
    	
    	void setNgay(int ngayValue) {
    		int a = ngay;
    		ngay = ngayValue;
    		if(this->checkDay() == true){
    			return;
			}
			else cout << "Loi cap nhat ngay that bai !!";
			ngay = a;
		}
		void setThang(int thangValue) {
			int a = thang;
    		thang = thangValue;
    		if(this->checkDay() == true){
    			return;
			}
			else cout << "Loi cap nhat thang that bai !!";
			thang = a;
		}
		void setNam(int namValue) {
    		nam = namValue;
		}
		
		
		bool namNhuan() {
			if((nam%4==0 && nam%100!=0) || nam%400==0)
				return true;
			else return false;
		} 
		
		bool checkDay() {
			
			int ngayTrongThang[13] = {0,31,0,31,30,31,30,31,31,30,31,30,31};
			
			if(ngay <= 0 || ngay > 31 || thang <= 0 || thang > 12){
				return false;
			}
			if(thang == 2) {
					if(namNhuan() == true){
						if(ngay<=29){
							return true;
						}
						else return false;
					}
					else if(ngay >= 29) return false;
			}else {
				if(ngay > ngayTrongThang[thang]){
					return false;
				}
			}
			return true;
			
		}
		
		void nhapDate() {
			cout << "Nhap vao ngay thang nam : ";
			cin >> ngay >> thang >> nam;
			
			while(this->checkDay() == false){
				cout << "Nhap sai vui long nhap lai ngay thang nam : ";
				cin >> ngay >> thang >> nam;
			}
		}
		
		void xuatDate() {
			cout << ngay << "/" << thang << "/" << nam; 
		}
		
		void cpDate(Date a) {
			this->ngay = a.ngay;
			this->thang = a.thang;
			this->nam = a.nam;
		} 
		
		void nextDay(Date a){
			this->ngay = a.ngay;
			this->thang = a.thang;
			this->nam = a.nam;
			
			this->ngay++;
			
			if(this->checkDay() == true) return;
			this->ngay = 1;
			this->thang++;
			if(this->checkDay() == true) return;
			this->thang = 1;
			this->nam++;
		}
		
		void previousDay(Date a) {
			this->ngay = a.ngay;
			this->thang = a.thang;
			this->nam = a.nam;
			int ngayTrongThang[13] = {0,31,0,31,30,31,30,31,31,30,31,30,31};
			if(thang == 1) {
				thang = 12; 
				ngay = 31; 
				nam--; 
				return;
			}
			ngay--;
			if(checkDay() == true) return;
			thang--;
			if(checkDay()==true) return;
			if(thang == 2) {
				if(namNhuan() == true) {
					ngay = 29;
				}
				else ngay = 28;
			}
			else {
				ngay = ngayTrongThang[thang];
			}
			return;
		}
		
		void congDate(int soNgay) {
			
			if(soNgay==0) return; 
			
			Date a(getNgay(),getThang(),getNam());
			do{
				a.nextDay(a);
				soNgay--;
			}while(soNgay >= 0);
			
			this->cpDate(a);
		}
	
};

int main() {
	Date sinhnhat;
	sinhnhat.nhapDate();
	cout << "\n";
	sinhnhat.xuatDate();
	cout << "\n";
	Date a;
	a.nextDay(sinhnhat);
	a.xuatDate();
	cout << "\n";
	
	a.previousDay(sinhnhat);
	a.xuatDate();
	cout << "\nCong date\n";
	a.previousDay(sinhnhat);
	a.congDate(20);
	a.xuatDate();
}
