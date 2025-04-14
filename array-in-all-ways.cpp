#include <iostream>
using namespace std;

class Animal{
    private:
        string vaccinated;
    public:
        virtual void setVaccinated(string name){
            vaccinated = name;
        }
        virtual void inputVaccinated(){
            string status;
            cout << "is this animal vaccinated? (yes/no): ";
            cin>> status;
            setVaccinated(status);
        }
        virtual void voice() {
            cout << "The animal sound" << endl;
        }
        string getVaccinated(){
            return vaccinated;
        }
};
class Sheep : public Animal {
    public:
        void voice() override{
            cout << "Baa Baa Baa \n";
    }
};
class Cat : public Animal {
    public :
        void voice () override{
            cout << "Mewo Mewo Mewo \n";
    }
};

int main (){
    //class to launch polymorhism
    Animal* a1 = new Sheep;
    Animal* a2 = new Cat;
    a1->voice();
    a1->inputVaccinated();
    a2->voice();
    a2->inputVaccinated();

    cout << a1 << " "<< "status"<< a1-> getVaccinated() ;
    cout << a2 << " "<< "status"<< a2->getVaccinated();
    return 0;


}
