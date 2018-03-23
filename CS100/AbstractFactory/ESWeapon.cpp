#include <iostream>
using namespace std;

class ESWeapon {
    public:
    virtual string toString() {
        return "";
    }
};

class ESUFOGun : public ESWeapon {
    public:
    string toString() {
        return "20 damage";
    }
};
