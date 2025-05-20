#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
// #define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/




class Country {
private:
    int voters[100];
    static int candidateAType;
    static int candidateBType;
    static int votesForA;
    static int votesForB;

public:
    void inputVoters(int num) {
        int tmp;
        for (int i=0; i < num; ++i) {
            cin >> tmp;
            voters[i] = tmp; 
        }
    }
    static void inputCandidates() {
        cout << "Enter type for candidate A:\n";
        cin >> candidateAType;
        cout << "Enter type for candidate B:\n";
        cin >> candidateBType;
    }
    void castVotes(int num) {
        for (int i=0; i < num; ++i) {
            if (abs(voters[i]-candidateAType) >= abs(voters[i]-candidateBType)) {
                votesForA++;
            }
            else {
                votesForB++;
            }
        }
    }
    void outputWinner() {
        if (votesForA >= votesForB) {
            cout << "Candidate A wins with " << votesForA << "votes.\n";
        }
        else {
            cout << "Candidate B wins with " << votesForB << "votes.\n";

        }

    }

};


int Country::candidateAType = 0;
int Country::candidateBType = 0;
int Country::votesForA = 0;
int Country::votesForB = 0;

signed main(void) {
    Country country;
    int num;

    cout << "number of voters: ";
    cin >> num;

    country.inputVoters(num);
    Country::inputCandidates();

    country.castVotes(num);
    country.outputWinner();
    system("pause");
}