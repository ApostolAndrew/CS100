#include <iostream>
#include "UFOEnemyShip.cpp"
using namespace std;

class EnemyShipBuilding {
    protected:
    EnemyShip makeEnemyShip(string typeOfShip);
    public:
    EnemyShip orderTheShip(string typeOfShip) {
        EnemyShip theEnemyShip = makeEnemyShip(typeOfShip);
        // theEnemyShip.makeShip();
        // theEnemyShip.displayEnemyShip();
        // theEnemyShip.followHeroShip();
        // theEnemyShip.enemyShipShoots();
        
        return theEnemyShip;
    }
};

class UFOEnemyShipBuilding : EnemyShipBuilding {
    protected:
    EnemyShip makeEnemyShip(string typeOfShip) {
        EnemyShip theEnemyShip;
        
        if (typeOfShip == "UFO") {
            EnemyShipFactory* shipPartsFactory = new UFOEnemyShipFactory();
            theEnemyShip = new UFOEnemyShip(shipPartsFactory);
            theEnemyShip->setName("UFO Grunt Ship");
        }
        // else {
        //         if (typeOfShip == "UFO BOSS") {
        //         EnemyShipFactory shipPartsFactory = new UFOBossEnemyShipFactory();
        //         theEnemyShip = new UFOBossEnemyShip(shipPartsFactory);
        //         theEnemyShip.setName("UFO Boss Ship");
        //     }
        // }
        return theEnemyShip;
    }
};
