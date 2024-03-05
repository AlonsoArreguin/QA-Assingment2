from main import calculate_bmi


def test_underweight():
    bmi, category = calculate_bmi(60, 80)
    assert category == "Underweight"

def test_normal_weight():
    bmi, category = calculate_bmi(65, 140)
    assert category == "Normal weight"

def test_overweight():
    bmi, category = calculate_bmi(70, 180)
    assert category == "Overweight"

def test_obese():
    bmi, category = calculate_bmi(72, 220)
    assert category == "Obese"
