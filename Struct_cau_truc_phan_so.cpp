/*
Xây dựng cấu trúc phân số với 2 thành phần là tử và mẫu. Tiến hành nhập 2 phân số từ bàn phím và in ra phân số ở dạng tối giản. Tính tổng, hiệu của 2 phân số và in ra ở dạng tối giản. Chú ý trong trường hợp mẫu số âm thì đưa dấu âm lên trên tử

Input Format

Dòng đầu tiên là tử và mẫu của phân số thứ 1. Dòng thứ 2 là tử và mẫu của phân số thứ 2.

Constraints

Tử và mẫu là các số nguyên nằm nằm trong đoạn [1, 1000]

Output Format

Dòng 1 in ra phân số thứ nhất ở dạng tối giản. Dòng 2 in ra phân số thứ 2 ở dạng tối giản. Dòng 3 in ra tổng của 2 phân số ở dạng tối giản. Dòng 4 in ra hiệu của 2 phân số ở dạng tối giản.

Sample Input 0

145 639
911 93
Sample Output 0

145/639
911/93
198538/19809
-189548/19809
*/
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int gcd(ll a, ll b){
	ll r;
	while(b){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int lcm(ll a, ll b){
	return a/gcd(a, b)*b;
}

struct phanSo{
	ll tu, mau;
	void toiGian(){
		ll uc = gcd(tu, mau);
		tu /= uc;
		mau /= uc;
	}
	void nhap(){
		cin >> tu >> mau;
	}
	void in(){
		if(mau<0){
			mau=abs(mau);
			tu*=-1;
		}
		cout << tu << "/" << mau << endl; 
	}
};
phanSo tong(phanSo a, phanSo b){
	ll mc = lcm(a.mau, b.mau);
	phanSo c;
	c.tu = mc/a.mau*a.tu+mc/b.mau*b.tu;
	c.mau=mc;
	c.toiGian();
	return c;
}
phanSo hieu(phanSo a, phanSo b){
	ll mc = lcm(a.mau, b.mau);
	phanSo c;
	c.tu = mc/a.mau*a.tu-mc/b.mau*b.tu;
	c.mau=mc;
	c.toiGian();
	return c;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    phanSo a, b;
    a.nhap(); b.nhap();
    a.toiGian(); b.toiGian();
    a.in(); b.in();
    phanSo sum = tong(a,b);
    phanSo dif = hieu(a,b);
    sum.in(); dif.in();
}