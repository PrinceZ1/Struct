/*
Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. Thực hiện sắp xếp sinh viên theo địa chỉ tăng dần về thứ tự từ điển, nếu 2 sinh viên cùng địa chỉ thì sinh viên nào có gpa cao hơn sẽ xếp trước.

Input Format

Dòng đầu là N : số lượng sinh viên. Các dòng tiếp theo mổ tả thông tin sinh viên trên 4 dòng : Tên, ngày sinh, địa chỉ, gpa.

Constraints

1<=N<=1000; Tên sinh viên có không quá 50 kí tự; Địa chỉ không quá 20 kí tự; Gpa là số thực trong khoảng từ 0 tới 4;

Output Format

In ra danh sách sinh viên sau khi sắp xếp. Mỗi sinh viên được in thông tin trên 1 dòng gồm tên, ngày sinh, địa chỉ, gpa lấy 2 số sau dấu phẩy. Các thông tin được in cách nhau một dấu cách.

Sample Input 0

5
Do Manh Tuan
9/7/2004
Bac Ninh
2.00
Vu Phuong Vinh
15/8/2004
Hai Duong
0.70
Vu Mai Tuan
26/10/2004
Nghe An
1.90
Nguyen Lam Vinh
17/9/2004
Nghe An
0.20
Nguyen Phuong Nhung
20/5/2004
Ninh Binh
3.20
Sample Output 0

Do Manh Tuan 9/7/2004 Bac Ninh 2.00
Vu Phuong Vinh 15/8/2004 Hai Duong 0.70
Vu Mai Tuan 26/10/2004 Nghe An 1.90
Nguyen Lam Vinh 17/9/2004 Nghe An 0.20
Nguyen Phuong Nhung 20/5/2004 Ninh Binh 3.20
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct SV{
    string ten, ns, dc;
    double gpa;
};

bool cmp(SV a, SV b){
    if(a.dc != b.dc)
        return a.dc < b.dc;
    else
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
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i].ten << ' ' << a[i].ns << ' ' << a[i].dc << ' ' << fixed << setprecision(2) << a[i].gpa << endl;
    }
}
