def bmi(weight: float, height: float) -> float:
    return weight / (height * height)


def print_bmi(bmi: float) -> float:
    if bmi < 18.5:
        print("Пониженный вес")
    elif bmi < 25.0:
        print("В норме")
    elif bmi < 30.0:
        print("Избыточный вес")
    else:
        print("Ожирение")


print ("Введите ваш вес и рост через пробел: ");
weight, height = map(float, input().split(" "))

print_bmi(bmi(weight, height / 100))