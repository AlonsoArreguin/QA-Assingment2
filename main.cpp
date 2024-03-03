#include <iostream>
#include <string>

using namespace std;

void calculateBMI(float height, float weight, float& BMI, string&  category);

int main()
{
    float weight, height, BMI;
    string category;
    cout << "What is your height? (in inches): " << endl;
    cin >> height;
    cout << "What is your weight? (in pounds): " << endl;
    cin >> weight;
    calculateBMI(height, weight, BMI, category);

    cout << "Your BMI is: " << BMI << endl;
    cout << "Category: " << category << endl;
    return 0; 
}
void calculateBMI(float height, float weight, float& BMI, string&  category) {
    BMI = (weight * 0.45) / ((height * 0.025) * (height * 0.025));
    if (BMI < 18.5) {
        category = "Underweight";
    }
    else if (BMI > 18.5 && BMI < 24.9) {
        category = "Normal weight";
    }
    else if (BMI > 25 && BMI < 29.9) {
        category = "Overweight";
    }
    else if (BMI >= 30) {
        category = "Obese";
    }
}