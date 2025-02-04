#include <iostream>
#include <iomanip> // For setting precision
using namespace std;

class HealthInsurance {
private:
    double basePremium;
    double riskFactor;

public:
    // Default constructor
    HealthInsurance() : basePremium(10.0), riskFactor(0.08) {}

    // Parameterized constructor
    HealthInsurance(double base) : basePremium(base), riskFactor(0.08) {}

    // Method to calculate adjusted premium
    double calculateAdjustedPremium() {
        // Adjust risk factor if basePremium > 100
        if (basePremium > 100) {
            riskFactor -= 0.02;
        }

        // Calculate adjusted premium
        double adjustedPremium = basePremium * (1 + riskFactor + (basePremium / 2000));

        // Apply 5% discount if adjustedPremium > 150
        if (adjustedPremium > 150) {
            adjustedPremium *= 0.95;
        }

        return adjustedPremium;
    }
};

int main() {
    int choice;
    cin >> choice;

    double basePremium = 0.0;
    HealthInsurance insurance; // Default object

    if (choice == 2) {
        cin >> basePremium;
        insurance = HealthInsurance(basePremium); // Custom basePremium
    }

    // Calculate and output the adjusted premium
    cout << fixed << setprecision(2) << insurance.calculateAdjustedPremium() << endl;

    return 0;
}
