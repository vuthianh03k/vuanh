#include<iostream>
#include<iomanip>
using namespace std;
struct Quanly {
	char ma[5];
	char ten[30];
	int so_tin;
	int hoc_ki;
};
void nhap_ds(Quanly ql[], int &n) {
	for(int i = 0; i <n ; i++) {
		cout << "\n\tNhap thong tin mon hoc thu: " << i+1<<endl;
		cin.ignore();
		cout << "\n\tNhap ma mon hoc: ";
		cin.getline(ql[i].ma, 6);
		cout << "\n\tNhap ten mon hoc: ";
		cin.getline(ql[i].ten, 31);
		do {
			cout << "\n\tNhap so tin: ";
			cin >> ql[i].so_tin;
			if(ql[i].so_tin <= 0) {
				cout << "\n\t[!]Nhap lai  so tin mon hoc";
			}
		} while(ql[i].so_tin <= 0);
		do {
			cout << "\n\tNhap hoc ki: ";
			cin >> ql[i].hoc_ki;
			if(ql[i].hoc_ki <= 0) {
				cout << "\n\t[!]Nhap lai hoc ki";
			}
		} while(ql[i].hoc_ki <= 0);
		cout << endl;
	}
}
void tieu_de() {
	cout << "\n\t+-----------+------------------------+--------------+---------------+";
	cout << "\n\t|   MA MON  |        TEN MON         |     SO TIN   |     HOC KI    +";
	cout << "\n\t+-----------+------------------------+--------------+---------------+\n";
}
void xuat(Quanly ql[], int n) {
	tieu_de();
	for(int i = 0; i <n ; i++) {
		cout << left << "\t"
		     << "|  " <<setw(9) << ql[i].ma
		     << "|  " <<setw(22) << ql[i].ten
		     << "|  " << setw(12) << ql[i].so_tin
		     << "|  " << setw(13) << ql[i].hoc_ki << "|"<<endl;
		cout << "\t+-----------+------------------------+--------------+---------------+\n";
	}
}
void xuat_dk(Quanly ql[], int n) {
	int dem = 0;
	for(int i = 0; i <n ; i++) {
		if(ql[i].so_tin == 3 && ql[i].hoc_ki == 2) {
			dem++;
		}
	}
	if(dem != 0) {

		cout << "\n\tTHONG TIN MON HOC CO 3 TIN CHI HOC KI 2\n";
		tieu_de();
		for(int i = 0; i <n ; i++) {
			if(ql[i].so_tin == 3 && ql[i].hoc_ki == 2) {
				cout << left << "\t"
				     << "|  " <<setw(9) << ql[i].ma
				     << "|  " <<setw(22) << ql[i].ten
				     << "|  " << setw(12) << ql[i].so_tin
				     << "|  " << setw(13) << ql[i].hoc_ki << "|"<<endl;
				cout << "\t+-----------+------------------------+--------------+---------------+\n";
			}
		}
	}
}
void menu() {
	cout << "\n\t+------------------------MENU------------------------+";
	cout << "\n\t| 1.Nhap danh sach mon hoc                           |";
	cout << "\n\t| 2.In danh sach mon hoc                             |";
	cout << "\n\t| 3.In danh sach mon 3 tin ki 2                      |";
	cout << "\n\t| 0.Thoat chuong trinh                               |";
	cout << "\n\t+----------------------------------------------------+";
}
int main() {
	int n, chon, dem =0;
	Quanly *ql = new Quanly[n];

	xuat_dk(ql,n);
	do {
		menu();
		cout << "\n\tNhap lua chon: ";
		cin >> chon;
		switch(chon) {
			case 1:
				do {
					cout << "\n\t[?]Nhap so mon hoc: ";
					cin >> n;
					if( n <= 0) {
						cout << "\n\tNhap lai mon hoc";
					}
				} while (n <= 0);
				nhap_ds(ql,n);
				dem++;
				break;
			case 2:
				if(dem != 0) {
					cout << "\n\t\tDANH SACH MON HOC\n";
					xuat(ql,n);
				} else cout << "\n\t[!] BAN CHUA NHAP DANH SACH MON HOC\n";
				break;
			case 3:
				if(dem != 0) {
					xuat_dk(ql,n);
				} else cout << "\n\t[!] BAN CHUA NHAP DANH SACH MON HOC\n";
				break;
			case 0:
				cout << "\n\tThoat chuong trinh";
				break;
		}
	} while(chon != 0);
	return 0;
}

