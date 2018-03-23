#include <iostream>
#include "ESWeapon.cpp"
#include "ESEngine.cpp"
using namespace std;

class EnemyShipFactory {
    public:
    ESWeapon* addESGun();
    ESEngine* addESEngine();
};

class UFOEnemyShipFactory : public EnemyShipFactory {
    public:
    ESWeapon* addESGun() {
        return new ESUFOGun();
    }
    ESEngine* addESEngine() {
        return new ESUFOEngine();
    }
};

