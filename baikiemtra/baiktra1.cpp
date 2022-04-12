#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
struct NS {
	int ngay;
};
class PTGT {
	private:
        NS ns;
		char ma_pt [4];
		char hang_sx [10];
		int ngay_sx ;
		float gia_chua_thue ;
		
	public:
		PTGT () {
			strcpy(this->ma_pt, "");
			strcpy(this->hang_sx,"");
			this->ns.ngay=ns.ngay;
			this->gia_chua_thue = 0;
			
		}
		~PTGT() {

		}
 void nhap(){
 	
 	cout <<"Nhap ma phuong dien ";
 	cin.getline(ma_pt,5);
 	cout <<"Nhap hang san xuat ";
 	cin.getline(hang_sx,11);
 	cout <<"Nhap ngay san xuat ";
 	cin >> ngay_sx;
 	cout <<"Nhap gia chua thue ";
 	cin >> gia_chua_thue;
 	
 	
}
	void Xuat()
		{
			cout<<"Ma phuong tien: "<< ma_pt <<endl;
			cout<<"Hang san xuat: "<< hang_sx <<endl;
			cout<<"Ngay san xuat: "<< ns.ngay <<endl;
			cout<<"Gia chua thue: "<< gia_chua_thue <<endl;
		}
};

int main()
{
	int n;
	cout<<"Nhap so PTGT: ";
	cin>>n;
	PTGT a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap thong tin PTGT thu "<<i+1<<endl;
	    a[i].Nhap();
	}
	cout<<"----Thong tin PTGT----"<<endl;
	for(int i=0;i<n;i++)
	{
		a[i].Xuat();
		cout<<endl;
	}
	
	return 0;
}