#include<iostream>
#include <math.h>
using namespace std;

int main() {
	int n, s= 0;
	do {
		cout << "Nhap n = ";
		cin >> n;
	} while(n < 0);
	
	for(int i = 1; i <= n ; i++){
		s+= pow((2*i-1),2);
	}
	cout << "\nTong day so la: " << s <<endl;
	return 0;
}

