#include <iostream>
using namespace std;

class Animal {
private:
    string vaccinated;
    string name;

public:
    virtual void setVaccinated(string check) {
        vaccinated = check;
    }

    virtual void inputVaccinated() {
        string status;
        cout << "Is this animal vaccinated? (yes/no): ";
        cin >> status;
        setVaccinated(status);
    }

    virtual void voice() {
        cout << "The animal makes a sound." << endl;
    }

    string getVaccinated() {
        return vaccinated;
    }

    virtual void initializer() {
        name = "Animal";
    }

    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

class Sheep : public Animal {
public:
    void initializer() override {
        setName("Sheep");
    }

    void voice() override {
        cout << "Baa Baa Baa\n";
    }
};

class Cat : public Animal {
public:
    void initializer() override {
        setName("Cat");
    }

    void voice() override {
        cout << "Meow Meow Meow\n";
    }
};

int main() {
    Animal* a1 = new Sheep;
    Animal* a2 = new Cat;

    a1->initializer();  // Set name properly
    a2->initializer();

    a1->voice();
    a1->inputVaccinated();

    a2->voice();
    a2->inputVaccinated();

    cout << a1->getName() << " vaccination status: " << a1->getVaccinated() << endl;
    cout << a2->getName() << " vaccination status: " << a2->getVaccinated() << endl;

    delete a1;
    delete a2;

    return 0;
}

