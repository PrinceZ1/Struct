/*
Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. Thực hiện sắp xếp sinh viên theo gpa giảm dần, nếu 2 sinh viên có cùng điểm thì sinh viên nào xếp trước trong danh sách sẽ được in ra trước.

Input Format

Dòng đầu là N : số lượng sinh viên. Các dòng tiếp theo mổ tả thông tin sinh viên trên 4 dòng : Tên, ngày sinh, địa chỉ, gpa.

Constraints

1<=N<=1000; Tên sinh viên có không quá 50 kí tự; Địa chỉ không quá 20 kí tự; Gpa là số thực trong khoảng từ 0 tới 4;

Output Format

In ra danh sách sinh viên sau khi sắp xếp. Mỗi sinh viên được in thông tin trên 1 dòng gồm tên, ngày sinh, địa chỉ, gpa lấy 2 số sau dấu phẩy. Các thông tin được in cách nhau một dấu cách.

Sample Input 0

6
Do Hoai Nam
14/6/2004
Bac Ninh
3.80
Vu Hoai Tuan
28/7/2004
Nam Dinh
3.90
Pham Hoai Nhung
24/3/2004
Bac Ninh
3.80
Tran Hoai Phuong
17/1/2004
Nghe An
2.20
Do Phuong Vinh
12/11/2004
Nam Dinh
1.30
Do Manh Nam
20/12/2004
Ninh Binh
2.90
Sample Output 0

Vu Hoai Tuan 28/7/2004 Nam Dinh 3.90
Do Hoai Nam 14/6/2004 Bac Ninh 3.80
Pham Hoai Nhung 24/3/2004 Bac Ninh 3.80
Do Manh Nam 20/12/2004 Ninh Binh 2.90
Tran Hoai Phuong 17/1/2004 Nghe An 2.20
Do Phuong Vinh 12/11/2004 Nam Dinh 1.30
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct SV{
    string ten, ns, dc;
    double gpa;
};

bool cmp(SV a, SV b){
    return a.gpa > b.gpa;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    SV a[n];
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, a[i].ten);
        getline(cin, a[i].ns);
        getline(cin, a[i].dc);
        cin >> a[i].gpa;
    }
    stable_sort(a, a + n, cmp);   
    for(int i = 0; i < n; i++){
        cout << a[i].ten << ' ' << a[i].ns << ' ' << a[i].dc << ' ' << fixed << setprecision(2) << a[i].gpa << endl;
    }
}
