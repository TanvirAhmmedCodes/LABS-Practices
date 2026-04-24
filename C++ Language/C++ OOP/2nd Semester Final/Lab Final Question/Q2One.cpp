/*
You are developing the architecture for a new 3D game engine.
1. Create a foundational base class named Entity, which contains a critical function called spawnInWorld().
2. Create two distinct capability classes: RenderComponent (handles graphics) and PhysicsComponent (handles collisions). Both must inherit from Entity.
3. Create the PlayerCharacter class, which must inherit from BOTH the RenderComponent and the PhysicsComponent.

Mandatory Constraints:
• The Structural Flaw: Implementing the exact architecture described above will intentionally trigger a severe ambiguity error when the PlayerCharacter attempts to call spawnInWorld().
• The Resolution: You must resolve this architectural flaw using the proper C++ inheritance mechanism. You must modify the structure to guarantee that the PlayerCharacter receives only one shared, unified instance of the Entity base class, allowing spawnInWorld() to execute perfectly without compiler errors.
*/

#include <iostream>
using namespace std;

class Entity {
public:
    void spawnInWorld() {
        cout << "Spawned in World" << endl;
    }
};

class RenderComponent : virtual public Entity {};
class PhysicsComponent : virtual public Entity {};

class PlayerCharacter : public RenderComponent, public PhysicsComponent {};

int main() {
    PlayerCharacter p;
    p.spawnInWorld();
}