# problem_3.py
def largest_prime_factor(n):
    factor = 2
    while factor * factor <= n:
        if n % factor:
            factor += 1
        else:
            n //= factor
    return n

number = 600851475143
print(f"The largest prime factor of {number} é: {largest_prime_factor(number)}")
