/*Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. Bạn hãy liệt kê các sinh viên sinh vào tháng 4.

Input Format

Dòng đầu là N : số lượng sinh viên. Các dòng tiếp theo mổ tả thông tin sinh viên trên 4 dòng : Tên, ngày sinh, địa chỉ, gpa.

Constraints

1<=N<=1000; Tên sinh viên có không quá 50 kí tự; Địa chỉ không quá 20 kí tự; Gpa là số thực trong khoảng từ 0 tới 4;

Output Format

In ra danh sách sinh viên thỏa mãn. Mỗi sinh viên được in thông tin trên 1 dòng gồm tên, ngày sinh, địa chỉ, gpa lấy 2 số sau dấu phẩy. Các thông tin được in cách nhau một dấu cách.

Sample Input 0

6
Do Mai Nam
13/8/2004
Nam Dinh
0.50
Do Manh Nam
19/7/2004
Ninh Binh
2.20
Do Phuong Vinh
25/1/2004
Hai Duong
3.90
Tran Manh Nhung
12/8/2004
Bac Ninh
3.90
Nguyen Phuong Vinh
6/3/2004
Nghe An
0.30
Tran Hoai Phuong
23/4/2004
Nghe An
3.30
Sample Output 0

Tran Hoai Phuong 23/4/2004 Nghe An 3.30
*/
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

struct SV{
    string ten, ns, dc;
    double gpa;
};

int getMonth(string ns){
    int i=0;
    while(ns[i] != '/'){
        ++i;
    }
    ++i;
    int num=0;
    while(ns[i]!='/'){
        num=num*10+(ns[i]-'0');
        ++i;
    }
    return num;
}

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
        if(getMonth(a[i].ns)==4){
            cout << a[i].ten << ' ' << a[i].ns << ' ' << a[i].dc << ' ' << fixed << setprecision(2) << a[i].gpa << endl;
        }
    }
}