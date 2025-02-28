#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


struct Date {
    
    int year;
    int month;
    int day;
};

struct Student {
    string name;
    int id;
    float GPA;
    Date birthDate;
};

void print(Student a) {
    cout << "Name: " << a.name << '\n';
    cout << "ID: " << a.id << '\n';
    cout << "GPA: " << a.GPA << '\n';
    cout << "BIRTHDAY: " << a.birthDate.year << '-' << a.birthDate.month << '-' << a.birthDate.day << '\n';
}

signed main(void) {
    Student s;
    int tmp;

    cin >> s.name >> s.id >> s.GPA >> tmp;
    s.birthDate = {tmp/10000, (tmp%10000)/100, tmp%100};

    print(s);
    int input;
    cin >> input;
}