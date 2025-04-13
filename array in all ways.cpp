#include <iostream> 
using namespace std;

class Animal{
    public:
        virtual void voice() {
            cout << "The animal sound" << endl;
        }
};
class Sheep : public Animal {
    public: 
    void voice() override{
        cout << "Baa Baa Baa /n";
    }
};
class Cat : public Animal {
    public :
    void voice () override{
        cout << "Mewo Mewo Mewo /n";
    }
};

int main (){
    Animal* a1 = new Sheep;
    Animal* a2 = new Cat;
    a1->voice();
    a2->voice();
    cout << a1 << " "<< a2;
    return 0;
}