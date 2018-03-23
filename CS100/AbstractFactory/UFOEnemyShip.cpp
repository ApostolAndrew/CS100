#include <iostream>
#include "EnemyShipFactory.cpp"

using namespace std;

class EnemyShip {
    private:
    string name;
    public:
    ESWeapon* weapon;
    ESEngine* engine;
    string getName() {
        return name;
    }
    void setName(string newName) {
        name = newName;
    }
    virtual void makeShip() {
        return;
    }
    string toString() {
        
        return "";
    }
};

class UFOEnemyShip : public EnemyShip {
    public:
    EnemyShipFactory shipFactory;
    UFOEnemyShip(EnemyShipFactory shipFactory) {
        this->shipFactory = shipFactory;
    }
    void makeShip() {
        cout << "Making enemy ship " << this->getName() << endl;
        weapon = shipFactory.addESGun();
        engine = shipFactory.addESEngine();
    }
};
