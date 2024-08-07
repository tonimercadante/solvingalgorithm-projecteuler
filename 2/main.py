# problem_2.py
a, b = 1, 2
sum = 0
while a <= 4000000:
    if a % 2 == 0:
        sum += a
    a, b = b, a + b

print(f"The sum of even terms in the Fibonacci sequence that do not exceed four million is: {sum}")
