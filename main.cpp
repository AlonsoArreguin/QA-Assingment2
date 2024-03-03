#include <iostream>

using namespace std;

int main()
{
    float weight, height, BMI, w1, h1, h2;
    cout << "What is your height? (in inches): " << endl;
    cin >> height;
    cout << "What is your wight? (in pounds): " << endl;
    cin >> weight;
    w1 = weight * 0.45;
    h1 = height * 0.025;
    h2 = h1 * h1;
    BMI = w1/h2;
    cout << "Your BMI is: " << BMI << endl;
    if (BMI < 18.5) {
        cout << "Youre UnderWeight" << endl;
    }
    else if (BMI > 18.5 && BMI < 24.9) {
        cout << "Youre Normal weight" << endl;
    }
    else if (BMI > 25 && BMI < 29.9) {
        cout << "Youre Overweight" << endl;
    }
    else if (BMI >= 30) {
        cout << "Youre Obese" << endl;
    }
    return 0; 
}