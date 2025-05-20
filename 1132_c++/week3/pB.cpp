#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/



class student {
private:
    int studentID;
    string name;
    float eng, math, phy;
    float avg() {
        return (eng+math+phy)/3;
    }

public:
    void Takedata() {
        cout << "Enter studentID: ";
        cin >> studentID;

        cout << "enter student name: ";
        cin >> name;

        cout << "Enter grades in English, Math, and Physics: ";
        cin >> eng  >> math >> phy;
    }

    void Showdata() {
        cout << "StudentID: " << studentID << '\n';
        cout << "Student Name: " << name << '\n';
        cout << "English: " << eng << '\n';
        cout << "Math: " << math << '\n';
        cout << "Physics: " << phy << '\n';
    }

    void PassOrFail() {
        if (avg() >= 60) {
            cout << "Pass\n";
        }
        else {
            cout << "Fail\n";
        }
    }
};

signed main(void) {
    student obj;
    obj.Takedata();
    obj.Showdata();
    obj.PassOrFail();
    return 0;
}