#include <iostream>
#include <string>

using namespace std;

class Chef {
public:
    Chef(string name) : name(name) {
        cout << "chef " << name << " konstruktori" << endl;
    }
    ~Chef() {
        cout << "chef " << name << " destruktori" << endl;
    }
    void makeSalad() {
        cout << "chef " << name << " makes salad" << endl;
    }
    void makeSoup() {
        cout << "chef " << name << " makes soup" << endl;
    }
protected:
    string name;
};

class ItalianChef : public Chef {
public:
    ItalianChef(string name, int vesi, int jauho) : Chef(name), jauho(jauho), vesi(vesi) {}
        string getname() {
        return name;
        }
        void makepastawrecipe() {
            cout << "chef " << name << " makes pasta with special recipe" << endl;
        }
        void printformula() {
            cout << "chef " << name << " uses jauhot =" << jauho << endl;
            cout << "chef " << name << " uses vesi =" << vesi << endl;
        }
        ~ItalianChef() {
            cout << "italianchef " << name << " destruktori" << endl;
        }
    private: int jauho;
    private: int vesi;
};


int main() {
    Chef chef1("jyke");
    chef1.makeSalad();
    chef1.makeSoup();


    ItalianChef italianChef("marjo", 100, 250);
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makepastawrecipe();
    italianChef.printformula();
    return 0;
}
