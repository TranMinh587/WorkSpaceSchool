#include <iostream>
#include <cmath>

using namespace std;

class Diem {
private:
    int x;
    int y;

public:
    Diem() {
        x = 0;
        y = 0;
    }

    Diem(int xValue, int yValue) {
        x = xValue;
        y = yValue;
    }

    void nhapDiem() {
        cout << "Nhap toa do x: ";
        cin >> x;
        cout << "Nhap toa do y: ";
        cin >> y;
    }

    void hienThi() {
        cout << "(" << x << "," << y << ")" << endl;
    }

    void doiDiem(int dx, int dy) {
        x += dx;
        y += dy;
    }

    int giaTriX() {
        return x;
    }

    int giaTriY() {
        return y;
    }

    float khoangCach() {
        return sqrt(x * x + y * y);
    }

    float khoangCach(Diem d) {
        int dx = x - d.giaTriX();
        int dy = y - d.giaTriY();
        return sqrt(dx * dx + dy * dy);
    }
};

int main() {
    Diem d1;
    d1.nhapDiem();
    cout << "Toa do diem d1: ";
    d1.hienThi();

    Diem d2(3, 4);
    cout << "Toa do diem d2: ";
    d2.hienThi();

    d2.doiDiem(1, -1);
    cout << "Toa do diem d2 sau khi doi: ";
    d2.hienThi();

    cout << "Gia tri hoanh do cua diem d2: " << d2.giaTriX() << endl;
    cout << "Gia tri tung do cua diem d2: " << d2.giaTriY() << endl;

    cout << "Khoang cach tu diem d1 den goc toa do: " << d1.khoangCach() << endl;

    cout << "Nhap toa do diem d3: ";
    Diem d3;
    d3.nhapDiem();
    cout << "Toa do diem d3: ";
    d3.hienThi();
    cout << "Khoang cach tu diem d2 den diem d3: " << d2.khoangCach(d3) << endl;
	
    return 0;
}
