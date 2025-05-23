#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <iomanip>
#include <omp.h>
#include <cassert>
#include <unordered_map>

using namespace std;

enum class suit : short { SPADE, HEART, DIAMOND, CLUB };

class pips {
public:
    pips(int val) : v(val) { assert(v > 0 && v < 14); }
    int get_pips() const { return v; }
private:
    int v;
};

class card {
public:
    card() : s(suit::SPADE), v(1) {}
    card(suit st, pips pv) : s(st), v(pv) {}
    suit get_suit() const { return s; }
    pips get_pips() const { return v; }
private:
    suit s;
    pips v;
};

void init_deck(vector<card>& d) {
    int idx = 0;
    for (int s = 0; s < 4; s++) {
        for (int i = 1; i < 14; i++) {
            d[idx++] = card(static_cast<suit>(s), pips(i));
        }
    }
}

bool is_flush(const vector<card>& hand) {
    suit s = hand[0].get_suit();
    for (int i = 1; i < 5; i++)
        if (hand[i].get_suit() != s) return false;
    return true;
}

bool is_straight(vector<card> hand) {
    sort(hand.begin(), hand.end(), [](const card& a, const card& b) {
        return a.get_pips().get_pips() < b.get_pips().get_pips();
    });
    int pips_v[5];
    for (int i = 0; i < 5; ++i)
        pips_v[i] = hand[i].get_pips().get_pips();

    bool normal = true;
    for (int i = 1; i < 5; ++i)
        if (pips_v[i] != pips_v[i - 1] + 1) normal = false;

// sp 
    bool ace_high = (pips_v[0] == 1 &&
                     pips_v[1] == 10 &&
                     pips_v[2] == 11 &&
                     pips_v[3] == 12 &&
                     pips_v[4] == 13);

    return normal || ace_high;
}

// bool is_full_house(const vector<card>& hand) {
//     int count[14] = {};
//     for (const auto& c : hand)
//         count[c.get_pips().get_pips()]++;
//     bool has_3 = false, has_2 = false;
//     for (int i = 1; i <= 13; ++i) {
//         if (count[i] == 3) has_3 = true;
//         if (count[i] == 2) has_2 = true;
//     }
//     return has_3 && has_2;
// }

bool is_full_house(const vector<card>& hand) {
    unordered_map<int, int> count = {};
    // int count[14] = {};
    for (const auto& c : hand)
        count[c.get_pips().get_pips()]++;

    bool has_3 = false, has_2 = false;
    for (int i = 1; i <= 13; ++i) {
        if (count[i] == 3) has_3 = true;
        if (count[i] == 2) has_2 = true;
    }
    return has_3 && has_2;
}

int main() {
    const long long num_shuffles = static_cast<unsigned long long>(1e13);
    int flush_count = 0, str_count = 0, str_flush_count = 0, full_house = 0;
    double start_time = omp_get_wtime();
    #pragma omp parallel reduction(+:flush_count, str_count, str_flush_count, full_house)
    {
        std::random_device rd;
        std::mt19937 gen(rd() + omp_get_thread_num());
        vector<card> deck(52);
        init_deck(deck);

        #pragma omp for
        for (int loop = 0; loop < num_shuffles; ++loop) {
            shuffle(deck.begin(), deck.end(), gen);
            vector<card> hand(deck.begin(), deck.begin() + 5);

            bool flush = is_flush(hand);
            bool straight = is_straight(hand);
            if (flush) flush_count++;
            if (straight) str_count++;
            if (flush && straight) str_flush_count++;
            if (is_full_house(hand)) full_house++;
        }
    }

    cout << fixed << setprecision(10);
    cout << "Flushes: " << flush_count << " / " << num_shuffles << " = "
        << static_cast<double>(flush_count) / num_shuffles << "\n";
    cout << "Straights: " << str_count << " / " << num_shuffles << " = "
        << static_cast<double>(str_count) / num_shuffles << "\n";
    cout << "Straight Flushes: " << str_flush_count << " / " << num_shuffles << " = "
        << static_cast<double>(str_flush_count) / num_shuffles << "\n";
    cout << "Full House: " << full_house << " / " << num_shuffles << " = "
        << static_cast<double>(full_house) / num_shuffles << "\n";
    
    cout << omp_get_wtime() - start_time << '\n';

    return 0;
}
