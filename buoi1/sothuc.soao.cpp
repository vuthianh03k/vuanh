#include<iostream>
using namespace std;
class Phanso {
	private:
		long tu;
		long mau;
	public:
		// ham tao
		Phanso() {
			this->tu = 0;
			this->mau = 1;
		}
		// ham huy
		~Phanso () {

		}
		// thiet lap gia tri cho tu
		void set_tu(long tu) {
			this->tu = tu;
		}
		// tra ve gia tri cua tu
		long get_tu() {
			return this->tu;
		}

		// thiet lap gia tri cho mau
		void set_mau(long mau) {
			this->mau = mau;
		}
		// thiet lap gia tri cho mau
		long get_mau() {
			return this->mau;
		}
		void nhap() {
			cout << "\tNhap tu: ";
			cin >> tu;
			do {
				cout << "\tNhap mau: ";
				cin >> mau;
				if(mau == 0) {
					cout << "\n\t[!]Nhap lai mau\n";
				}
			} while(mau == 0);

		}
		void xuat() {
			if(mau != 1) {
				cout << tu << "/" << mau;
			} else cout << tu;

		}
		// ham ban
		friend Phanso operator + (Phanso a, Phanso b) {
			Phanso c;
			c.tu = (a.tu*b.mau) + (b.tu*a.mau);
			c.mau = a.mau * b.mau;
			return c;
		}
		long ucln();
};

long Phanso::ucln() {
	if(tu == 0) {
		return 0;
	}
	while(tu != mau) {
		if(tu > mau) {
			tu -= mau;
		} else mau -= tu;
	}
	return tu;
}
void nhap(Phanso a[], int &n) {
	for(int i = 0; i <n ; i++) {
		cout << "\n\tNhap phan so thu: " << i+1<<endl;
		a[i].nhap();
	}
}
void xuat(Phanso a[], int n) {
	for(int i = 0; i <n ; i++) {
		cout << "\n\tNhap phan so thu: " << i+1<< " la: ";
		a[i].xuat();
	}
}

void tinh_tong(Phanso a[], int n) {
	Phanso d;
	for(int i = 0; i < n; i++) {
		d = d + a[i];

	}
	cout << "\n\n\n\tTong cac phan so la: ";
	d.xuat();

	long p,q;

	p = d.get_tu();
	q = d.get_mau();

	long m = d.ucln();
	p /= m;
	q /= m;
	d.set_tu(p);
	d.set_mau(q);
	cout << "\n\n\tPhan so sau khi toi gian la: ";
	d.xuat();
}

int main() {
	int n;
	Phanso *a = new Phanso [n+1];
	do {
		cout << "Nhap so phan so: ";
		cin >> n;
	} while(n <= 0);
	nhap(a,n);
	xuat(a,n);
	tinh_tong(a,n);

	return 0;
}

