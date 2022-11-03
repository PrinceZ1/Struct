/*
Đại học 28Univerisy nhận được 1 danh sách học sinh gồm thông tin về tên, ngày sinh, địa chỉ, điểm thi đại học của 3 môn Toán, Lý, Hóa. Nhiệm vụ của bạn dựa trên điểm trúng tuyển của ngành CNTT là 24 để xác định bạn nào trượt, bạn nào đỗ. Ngoài ra bạn còn phải tìm ra thủ khoa ngành CNTT năm nay.

Input Format

Dòng đầu tiên là N : Số lượng học sinh đăng ký xét tuyển. 4N dòng tiếp theo mỗi mô tả thông tin sinh viên : Dòng 1 : Họ tên, dòng 2 : Ngày sinh, dòng 3 : Địa chỉ, Dòng 4 : Điểm toán lý hóa.

Constraints

1<=N<=1000; Họ tên học sinh không quá 100 ký tự; Ngày sinh là xâu ký tự gồm 3 phần ngày, tháng, năm; Địa chỉ không quá 50 kí tự; Điểm toán lý hóa là số nguyên trong khoảng từ 0 tới 10.

Output Format

Đầu tiên in ra thông tin của thủ khoa trên 1 dòng gồm tên, ngày sinh, địa chỉ, tổng điểm 3 môn, nếu có nhiều thủ khoa có cùng điểm thì liệt kê hết theo thứ tự trong danh sách. Mỗi thủ khoa được in thông tin trên 1 dòng. Các dòng tiếp theo in ra thông tin của các học sinh xét tuyển gồm tên, ngày sinh, địa chỉ, tổng điểm 3 môn kèm theo ghi chú TRUOT hoặc DO ở cuối. Xem test case để hiểu rõ hơn.

Sample Input 0

7
Tran Hoai Vinh
12/11/2004
Nghe An
2 8 5
Tran Lam Nhung
1/7/2004
Ninh Binh
6 1 1
Tran Lam Tuan
18/7/2004
Ninh Binh
2 3 4
Do Manh Tuan
8/1/2004
Nam Dinh
7 5 8
Tran Lam Nam
15/3/2004
Nghe An
2 4 8
Vu Mai Phuong
2/11/2004
Nghe An
9 10 7
Vu Lam Vinh
27/8/2004
Nghe An
2 1 7
Sample Output 0

DANH SACH THU KHOA :
Vu Mai Phuong 2/11/2004 Nghe An 26
KET QUA XET TUYEN:
Tran Hoai Vinh 12/11/2004 Nghe An 15 TRUOT
Tran Lam Nhung 1/7/2004 Ninh Binh 8 TRUOT
Tran Lam Tuan 18/7/2004 Ninh Binh 9 TRUOT
Do Manh Tuan 8/1/2004 Nam Dinh 20 TRUOT
Tran Lam Nam 15/3/2004 Nghe An 14 TRUOT
Vu Mai Phuong 2/11/2004 Nghe An 26 DO
Vu Lam Vinh 27/8/2004 Nghe An 10 TRUOT
*/
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

struct SinhVien{
    string ten, ngaysinh, diachi;
    int toan, ly, hoa;
    void nhap(){
        getline(cin, ten);
        getline(cin, ngaysinh);
        getline(cin, diachi);
        cin >> toan >> ly >> hoa;
    }
    void in(){
        cout << ten << ' ' << ngaysinh << ' ' << diachi << ' ' << toan + ly + hoa << ' ';
        if(toan+ly+hoa>=24)
            cout << "DO\n";
        else
            cout << "TRUOT\n";
    }
    int tongdiem(){
        return toan+ly+hoa;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    SinhVien a[n];
    int max_diem=0;
    for(int i=0;i<n;i++){
        cin.ignore();
        a[i].nhap();
        max_diem=max(max_diem,a[i].tongdiem());
    }
    cout << "DANH SACH THU KHOA :\n";
    for(int i=0;i<n;i++){
        if(a[i].tongdiem()==max_diem){
            cout << a[i].ten << ' ' << a[i].ngaysinh << ' ' << a[i].diachi << ' ' << a[i].tongdiem() << endl;
        }
    }
    cout << "KET QUA XET TUYEN:\n";
    for(int i=0;i<n;i++){
        a[i].in();
    }
}