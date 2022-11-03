/*
Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. Lọc ra những sinh viên quê ở Nam Định có GPA >= 2.5

Input Format

Dòng đầu là N : số lượng sinh viên. Các dòng tiếp theo mổ tả thông tin sinh viên trên 4 dòng : Tên, ngày sinh, địa chỉ, gpa.

Constraints

1<=N<=1000; Tên sinh viên có không quá 50 kí tự; Địa chỉ không quá 20 kí tự; Gpa là số thực trong khoảng từ 0 tới 4;

Output Format

In ra danh sách sinh viên thỏa mãn điều kiện tìm kiếm. Mỗi sinh viên được in thông tin trên 1 dòng gồm tên, ngày sinh, địa chỉ, gpa lấy 2 số sau dấu phẩy. Các thông tin được in cách nhau một dấu cách.

Sample Input 0

7
Nguyen Mai Vinh
15/5/2004
Nam Dinh
1.80
Pham Manh Vinh
25/5/2004
Ninh Binh
0.70
Vu Mai Phuong
8/5/2004
Ninh Binh
0.60
Nguyen Mai Vinh
7/4/2004
Hai Duong
1.20
Pham Phuong Tuan
8/2/2004
Bac Ninh
2.00
Do Manh Nhung
27/10/2004
Nam Dinh
3.90
Vu Mai Vinh
28/8/2004
Nghe An
2.00
Sample Output 0

Do Manh Nhung 27/10/2004 Nam Dinh 3.90
*/
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

struct SV{
    string ten, ns, dc;
    double gpa;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    SV a[n];
    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin, a[i].ten);
        getline(cin, a[i].ns);
        getline(cin, a[i].dc);
        cin >> a[i].gpa;
    }
    for(int i=0;i<n;i++){
        if(a[i].dc == "Nam Dinh" && a[i].gpa >= 2.5){
            cout << a[i].ten << ' ' << a[i].ns << ' ' << a[i].dc << ' ' << fixed << setprecision(2) << a[i].gpa << endl;
        }
    }
}