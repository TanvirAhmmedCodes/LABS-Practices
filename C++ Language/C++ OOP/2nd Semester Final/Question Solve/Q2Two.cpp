/*
You are required to design a crash-proof genetic lab simulation system using inheritance. The system should consist of a base class named BioError (for handling inputs) and a derived class named BioValidator (responsible for validation and computation).

The system takes five inputs: Scientist ID, DNA Sequence, Radiation Level, Initial Cells, and Mutated Cells, and calculates a Mutation Factor using the formula:
Mutation Factor = Radiation Level / (Initial Cells - Mutated Cells).

All inputs must be strictly validated inside the derived class.
• The Scientist ID must be at least 8 characters long and contain at least one uppercase letter, one digit, one lowercase letter and must not contain any whitespace characters.
• The DNA sequence must start with "ATG" and contain only A, C, G, and T characters.
• The Radiation Level must not be negative, and
• Initial Cells must not be equal to Mutated Cells to avoid division by zero.

Execution Logic: In main(), implement the process using a try-catch mechanism. If any exception occurs, the system must print the error and automatically repeat the entire input process. The system must continuously demand new inputs until a 100% error-free session is processed, after which it should print "Simulation Complete".
*/

#include <iostream>
#include <regex>
using namespace std;

class BioError {
public:
    string id, dna;
    double radiation;
    int initCells, mutatedCells;
};

class BioValidator : public BioError {
public:
    void input() {
        cin >> id >> dna >> radiation >> initCells >> mutatedCells;
    }

    void validate() {
        if (!regex_match(id, regex("^(?=.*[A-Z])(?=.*[a-z])(?=.*\\d)[A-Za-z\\d]{8,}$")))
            throw runtime_error("Invalid ID");

        if (dna.substr(0, 3) != "ATG" || !regex_match(dna, regex("^[ACGT]+$")))
            throw runtime_error("Invalid DNA");

        if (radiation < 0)
            throw runtime_error("Invalid Radiation");

        if (initCells == mutatedCells)
            throw runtime_error("Division Error");
    }

    double mutationFactor() {
        return radiation / (initCells - mutatedCells);
    }
};

int main() {
    while (true) {
        try {
            BioValidator b;
            b.input();
            b.validate();
            cout << b.mutationFactor() << endl;
            cout << "Simulation Complete" << endl;
            break;
        } catch (exception &e) {
            cout << e.what() << endl;
        }
    }
}