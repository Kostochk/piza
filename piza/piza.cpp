#include <iostream>

using namespace std;

class BBQ {
    string t;
public:
    BBQ(string t = "Peace of BBQ") {
        this->t = t;
    }

    string getName() {
        return t;
    }
};

class FourthChesse {
    string t1;
public:
    FourthChesse(string t1 = "Peace of FourthChessee") {
        this->t1 = t1;
    }

    string getName() {
        return t1;
    }
};

class Hawai {
    string t2;
public:
    Hawai(string t2 = "Peace of Hawai") {
        this->t2 = t2;
    }

    string getName() {
        return t2;
    }
    
};

class Burger {
    string t3;
public:
    Burger(string t3 = "Peace of Burger") {
        this->t3 = t3;
    }

    string getName() {
        return t3;
    }

};




class Pizza {
    BBQ* bbq;
    FourthChesse* fourCheesse;
    Hawai* hawai;
    Burger* burger;
public:
    Pizza(BBQ* bbq, FourthChesse* fourCheesse, Hawai* hawai, Burger* burger) {
        this->bbq = bbq;
        this->fourCheesse = fourCheesse;
        this->hawai = hawai;
        this->burger = burger;

    }

    void eatPizza() {
        cout << this->bbq->getName();
        delete bbq;
        cout << this->fourCheesse->getName();
        delete fourCheesse;
        cout << this->hawai->getName();
        delete hawai;
        cout << this->burger->getName();
        delete burger;
    }
};

int main() {
    BBQ* bbq = new BBQ();
    FourthChesse* fourCheesse = new FourthChesse();
    Hawai* hawai = new Hawai();
    Burger* burger = new Burger();



    Pizza pizza = Pizza(bbq, fourCheesse, hawai, burger);


    pizza.eatPizza();
}