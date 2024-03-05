def calculate_bmi(height, weight):
    BMI = (weight * 0.45) / ((height * 0.025) ** 2)
    if BMI < 18.5:
        category = "Underweight"
    elif BMI < 24.9:
        category = "Normal weight"
    elif BMI < 29.9:
        category = "Overweight"
    else:
        category = "Obese"
    return BMI, category

def main():
    height = float(input("What is your height? (in inches): "))
    weight = float(input("What is your weight? (in pounds): "))
    BMI, category = calculate_bmi(height, weight)
    print("Your BMI is:", BMI)
    print("Category:", category)

if __name__ == "__main__":
    main()
