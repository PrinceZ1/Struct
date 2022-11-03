/*Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. Dựa vào kết quả GPA những sinh viên nào có điểm gpa < 1.0 sẽ bị đuổi học, nhiệm vụ của bạn là xóa những sinh viên có gpa < 1.0 sau đó in ra danh sách sinh viên còn lại.

Input Format

Dòng đầu là N : số lượng sinh viên. Các dòng tiếp theo mổ tả thông tin sinh viên trên 4 dòng : Tên, ngày sinh, địa chỉ, gpa.

Constraints

1<=N<=1000; Tên sinh viên có không quá 50 kí tự; Địa chỉ không quá 20 kí tự; Gpa là số thực trong khoảng từ 0 tới 4;

Output Format

In ra danh sách sinh viên sau khi xóa. Mỗi sinh viên được in thông tin trên 1 dòng gồm tên, ngày sinh, địa chỉ, gpa lấy 2 số sau dấu phẩy. Các thông tin được in cách nhau một dấu cách.

Sample Input 0

5
Do Lam Phuong
9/7/2004
Nam Dinh
2.50
Pham Lam Vinh
22/11/2004
Nghe An
0.60
Nguyen Mai Vinh
21/10/2004
Nam Dinh
3.80
Nguyen Mai Phuong
24/3/2004
Nam Dinh
4.00
Vu Lam Vinh
24/6/2004
Nam Dinh
1.90
Sample Output 0

Do Lam Phuong 9/7/2004 Nam Dinh 2.50
Nguyen Mai Vinh 21/10/2004 Nam Dinh 3.80
Nguyen Mai Phuong 24/3/2004 Nam Dinh 4.00
Vu Lam Vinh 24/6/2004 Nam Dinh 1.90
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
        if(a[i].gpa >= 1.0){
            cout << a[i].ten << ' ' << a[i].ns << ' ' << a[i].dc << ' ' << fixed << setprecision(2) << a[i].gpa << endl;
        }
    }
}