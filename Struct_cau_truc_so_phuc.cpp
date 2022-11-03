/*Xây dựng cấu trúc số phức gồm phần thực, phần ảo. Tiến hành nhập 2 số phức và tính tổng, hiệu, tích của 2 số phức này và in ra màn hình.

Input Format

Dòng 1 là phần thực và ảo của số phức thứ 1. Dòng 2 là phần thực và ảo của số phức thứ 2.

Constraints

Phần thực, ảo của số phức là các số nguyên nằm trong đoạn từ [-1000, 1000]

Output Format

Lần lượt in ra tổng, hiệu, tích của 2 số phức trên từng dòng.

Sample Input 0

972 646
787 474
Sample Output 0

1759 1120
185 172
458760 969130
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

struct SoPhuc{
    int thuc, ao;
    void nhap(){
        cin >> thuc >> ao;
    }
    void in(){
        cout << thuc << ' ' << ao << endl;
    }
};

SoPhuc tong(SoPhuc a, SoPhuc b){
    SoPhuc res;
    res.thuc = a.thuc + b.thuc;
    res.ao = a.ao + b.ao;
    return res;
}

SoPhuc hieu(SoPhuc a, SoPhuc b){
    SoPhuc res;
    res.thuc = a.thuc - b.thuc;
    res.ao = a.ao - b.ao;
    return res;
}

SoPhuc nhan(SoPhuc a, SoPhuc b){
    SoPhuc res;
    res.thuc = a.thuc * b.thuc - a.ao * b.ao;
    res.ao = a.thuc * b.ao + a.ao * b.thuc;
    return res;
}

int main(){
    SoPhuc a, b;
    a.nhap(); b.nhap();
    SoPhuc t1 = tong(a, b), t2 = hieu(a, b), t3 = nhan(a, b);
    t1.in(); t2.in(); t3.in();
}
