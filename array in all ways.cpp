#include <iostream>
using namespace std;

class Animal{
    private:
        string vaccinated;
        string name;
    public:
        virtual void setVaccinated(string check){
            vaccinated = check;
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
        void setName( string n){
            name = n;
        }
        string getName(){
        return name;
        }
};
class Sheep : public Animal {
    public:
        void initialize(){
            setName("Sheep");
        }

        void voice() override{
            cout << "Baa Baa Baa \n";
    }
};
class Cat : public Animal {
    public :
        void initialize(){
            setName("Cat");
        }
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

    cout << a1->initialize() << " "<< "status"<< a1-> getVaccinated() ;
    cout << a2->initialize()<< " "<< "status"<< a2->getVaccinated();
    return 0;


}
