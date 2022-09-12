class ParkingSystem {
private:
    int big = 0;
    int medium = 0;
    int small = 0;
public:
    ParkingSystem(int big, int medium, int small) {
        this->big = big;
        this->medium = medium;
        this->small = small;
    }
    
    bool addCar(int carType) {
        switch(carType){
            case 1: big--;return (big>=0?true:false);
            case 2: medium--;return (medium>=0?true:false);
            case 3: small--;return (small>=0?true:false);
        }
        return {};
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */