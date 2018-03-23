#include <iostream>
using namespace std;

class ESEngine {
    public:
    virtual string toString() {
        return "";
    }
};

class ESUFOEngine : public ESEngine {
    public:
    string toString() {
        return "1000 mph";
    }
};
