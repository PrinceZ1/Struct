/*Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. Bạn hãy tìm ra tỉnh thành có nhiều sinh viên nhất, nếu có nhiều tỉnh thành có cùng số lượng sinh viên thì in ra hết theo thứ tự từ điển.

Input Format

Dòng đầu là N : số lượng sinh viên. Các dòng tiếp theo mổ tả thông tin sinh viên trên 4 dòng : Tên, ngày sinh, địa chỉ, gpa.

Constraints

1<=N<=1000; Tên sinh viên có không quá 50 kí tự; Địa chỉ không quá 20 kí tự; Gpa là số thực trong khoảng từ 0 tới 4;

Output Format

In ra các tỉnh thành thỏa mãn, mỗi tỉnh thành trên 1 dòng.

Sample Input 0

6
Tran Phuong Phuong
15/7/2004
Hai Duong
0.20
Nguyen Phuong Phuong
5/7/2004
Ninh Binh
0.70
Tran Mai Vinh
19/12/2004
Bac Ninh
2.50
Nguyen Phuong Phuong
4/12/2004
Bac Ninh
3.90
Do Hoai Nam
18/8/2004
Nam Dinh
2.30
Tran Manh Nam
24/3/2004
Nghe An
1.20
Sample Output 0

Bac Ninh
*/
#include<bits/stdc++.h>
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    SV a[n];
    map<string, int> mp;
    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin, a[i].ten);
        getline(cin, a[i].ns);
        getline(cin, a[i].dc);
        cin >> a[i].gpa;
        mp[a[i].dc]++;
    }
    int maxfre=0;
    for(auto it : mp){
        maxfre = max(maxfre, it.second);
    }
    for(auto it : mp){
        if(it.second == maxfre){
            cout << it.first << endl;
        }
    }
}