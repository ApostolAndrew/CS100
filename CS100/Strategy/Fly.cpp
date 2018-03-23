#include <iostream>
using namespace std;

class Ability {
    public:
    virtual void OwnAbil() {
        return;
    }
};

class ItFlies : public Ability {
    public:
    void OwnAbil() {
        cout << "I can fly." << endl;
    }
};

class ItRuns : public Ability {
    public:
    void OwnAbil() {
        cout << "I can run." << endl;
    }
};


