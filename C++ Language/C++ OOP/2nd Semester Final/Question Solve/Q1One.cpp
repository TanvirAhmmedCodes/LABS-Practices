/*
You are designing a software architecture for a new vehicle.
1. Create a base class named Engine with a startEngine() function.
2. Create two classes, ElectricModule and GasModule, which both inherit from Engine.
3. Create a final class, HybridCar, which inherits from BOTH the ElectricModule and GasModule.

Mandatory Constraints:
• The Structural Ambiguity: Implementing the exact structure above will intentionally cause a severe compiler error because the HybridCar has a confusing, duplicate inheritance path.
• The Resolution: You must resolve this ambiguity using the appropriate C++ inheritance mechanism. You must ensure the HybridCar inherits only one single, shared instance of the Engine base class so that startEngine() executes perfectly without compiler errors.
*/

#include <iostream>
using namespace std;

class Engine {
public:
    void startEngine() {
        cout << "Engine Started" << endl;
    }
};

class ElectricModule : virtual public Engine {};
class GasModule : virtual public Engine {};

class HybridCar : public ElectricModule, public GasModule {};

int main() {
    HybridCar car;
    car.startEngine();
}