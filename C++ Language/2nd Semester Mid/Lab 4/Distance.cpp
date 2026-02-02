#include <iostream>
using namespace std;

class Distance {
private:
    int meters;

public:
    Distance(int m) {
        meters = m;
    }

    Distance(const Distance &d) {
        meters = d.meters;
    }

    int getMeters() {
        return meters;
    }
};

Distance addDistance(Distance d1, Distance d2) {
    return Distance(d1.getMeters() + d2.getMeters());
}

int main() {
    Distance d1(50);
    Distance d2(d1);

    Distance total = addDistance(d1, d2);

    cout << "Distance 1: " << d1.getMeters() << " meters" << endl;
    cout << "Distance 2: " << d2.getMeters() << " meters" << endl;
    cout << "Total Distance: " << total.getMeters() << " meters" << endl;

    return 0;
}