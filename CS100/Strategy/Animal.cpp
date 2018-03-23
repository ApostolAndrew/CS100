#include "Fly.cpp"

class Ability;

class Animal {
    public:
    int legs;
    Ability* abil;
    Animal() {};
    void GetAbility() {
        abil->OwnAbil();
    }
    void setAbility(Ability* newabil) {
        abil = newabil;
    }
    void GetLegs() {
        cout << "I have " << legs << " legs." << endl;
    }
};

class Dog : public Animal {
    public:
    Dog() {
        legs = 4;
        abil = new ItRuns();
    }
};

class Bird : public Animal {
    public:
    Bird() {
        legs = 2;
        abil = new ItFlies();
    }
};


int main() {
    Animal* sparky = new Dog();
    sparky->GetAbility();
    Animal* tweety = new Bird();
    tweety->GetAbility();
    sparky->setAbility(new ItFlies());
    sparky->GetAbility();
    sparky->GetLegs();
    return 0;
}