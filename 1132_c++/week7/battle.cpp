#include<bits/stdc++.h>
using namespace std;

// dummy
class swing {};
class shoot {};
class hand {};

class Character {
private:
    string name;
    int hp, mp;
public:
    Character(string n) : name(n) {
        hp = 50;
        mp = 10;
    }

    tuple<string, int, int> info() {
        return make_tuple(name, hp, mp);        
    }
    

    void modify(pair<int, int> n) {
        hp = hp - abs(n.first);
        mp = mp - n.second;
        return;
    }

    virtual int attack(swing *dummy) = 0;
    virtual int attack(shoot *dummy) = 0;
    virtual int attack(hand *dummy) = 0;
    virtual void specialAbility() = 0;
    virtual ~Character() {}
};

class BattleArena {
private:
    static Character *p1, *p2;

    static bool alive() {
        return get<1>(p1->info()) > 0 && get<1>(p2->info()) > 0;
    }
    static void announce() {
        int hp1 = get<1>(p1->info()), hp2 = get<1>(p2->info());
        if (get<1>(p1->info()) <= 0 && get<1>(p2->info()) <= 0) {
            cout << get<0>(p1->info())
            << " and "
            << get<0>(p2->info())
            << " both fall\n";
        }
        else if (get<1>(p1->info()) <= 0) {
            cout << get<0>(p1->info())
            << " is defeated!\n"
            << get<0>(p2->info())
            << " wins the battle!\n";
        }
        else if (get<1>(p2->info()) <= 0) {
            cout << get<0>(p2->info())
            << " is defeated!\n"
            << get<0>(p1->info())
            << " wins the battle!\n";
        }
    }
    inline static void show() {
        cout << '\n'
        << get<0>(p1->info())
        << " - Health: "
        << get<1>(p1->info())
        << "|Mana: "
        << get<2>(p1->info())
        << '\n'
        << get<0>(p2->info())
        << " - Health: "
        << get<1>(p2->info())
        << "|Mana: "
        << get<2>(p2->info())
        << "\n\n";
    }
    inline static void battle() {
        while (alive()) {
            selection(p1, p2);
            if (!alive()) {
                break;
            }
            selection(p2, p1);
            show();
        }
        announce();
    }
public:
    static void startBattle(Character *_p1, Character *_p2) {
        p1 = _p1, p2 = _p2;
        cout << "Battle Begins: "
        << get<0>(p1->info())
        << " VS "
        << get<0>(p2->info())
        << "!\n";
        battle();
    }
    
    inline static void selection(Character *attacker, Character *received) {
        int input;
        while (true) {
            cout << "type a number to choose a action for "
            << get<0>(attacker->info())
            << " in this round\n"
            << "1. normal attack\n"
            << "2. special ability\n";
            cin >> input;
            if (input == 1) {
                while (true) {
                    cout << "choose an attack action\n"
                    << "1. swing a sword\n"
                    << "2. shoots an arrow\n"
                    << "3. waving barehanded\n";
                    cin >> input;
                    int damage;
                    if (input == 1) {
                        damage = attacker->attack(new swing);
                        received->modify(make_pair(damage, 0));
                        cout << get<0>(attacker->info())
                        << " swing a sword at "
                        <<  get<0>(received->info())
                        << "!\n"
                        << get<0>(received->info())
                        << " takes "
                        << damage
                        << " damage.\n\n";
                        break;
                    }
                    else if (input == 2) {
                        damage = attacker->attack(new shoot);
                        received->modify(make_pair(damage, 0));
                        cout << get<0>(attacker->info())
                        << " shoots an arrow at "
                        << get<0>(received->info())
                        << "!\n"
                        << get<0>(received->info())
                        << " takes "
                        << damage
                        << " damage.\n\n";
                        break;
                    }
                    else if (input == 3) {
                        damage = attacker->attack(new hand);
                        received->modify(make_pair(damage, 0));
                        cout << get<0>(attacker->info())
                        << " waving a hand at "
                        << get<0>(received->info())
                        << " takes "
                        << damage
                        << " damage.\n\n";
                        break;
                    }
                    else {
                        cout << "type again\n";
                    }
                }
                break;
            }
            else if (input == 2) {
                if (get<2>(attacker->info()) >= 1) {
                    attacker->specialAbility();
                    cout << get<0>(attacker->info())
                    << " use the ability\n\n";
                    break;
                }
                else {
                    cout << "not enough mana\n\n";
                }
            }
            else {
                cout << "type again\n";
            }
        } 
    }
 
};

Character *BattleArena::p1 = nullptr;
Character *BattleArena::p2 = nullptr;


class Warrior : public Character {
private:
    int buff;
public:
    Warrior(string n) : Character(n), buff(0) {}

    int attack(swing *dummy) override {
        return 20 + buff; 
    }
    int attack(shoot *dummy) override {
        return 10;
    }
    int attack(hand *dummy) override {
        return 1;
    }

    void specialAbility() override {
        this->modify(make_pair(0, 2));
        buff = buff + 30;
        return;
    }
    
};

class Mage : public Character {
private:
    int buff;
public:
    Mage(string n) : Character(n), buff(1) {}

    int attack(swing *dummy) override {
        return 10 * buff;
    }
    int attack(shoot *dummy) override {
        return 10 * buff;
    }
    int attack(hand *dummy) override {
        return 1 * buff;
    }

    void specialAbility() override {
        this->modify(make_pair(0, 5));
        buff = buff * 114514;
        return;
    }
};

class Archer : public Character {
private:
    int buff;
public:
    Archer(string n) : Character(n), buff(0) {}

    int attack(swing *dummy) override {
        return 10;
    }
    int attack(shoot *dummy) override {
        return 20 + buff;
    }
    int attack(hand *dummy) override {
        return 1;
    }

    void specialAbility() override {
        this->modify(make_pair(0, 5));
        buff = buff + 30;
        return;
    }
};

signed main(void) {
    Character *player1 = new Warrior("silv");
    Character *player2 = new Mage(".mukui");

    BattleArena::startBattle(player1, player2);
    
    delete player1;
    delete player2;
    system("pause");
    return 0;
}
