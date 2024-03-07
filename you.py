from math import gcd

def simplify_fraction(numerator, denominator):
    common_divisor = gcd(numerator, denominator)
    return numerator // common_divisor, denominator // common_divisor

def count_pairs_of_fractions(N, numerator, denominator):
    fractions = {}
    count = 0

    for i in range(N):
        a, b = simplify_fraction(numerator[i], denominator[i])
        print(a)
        sum_fraction = a * denominator[i] + b * numerator[i], b * denominator[i]
        fractions[sum_fraction] = fractions.get(sum_fraction, 0) + 1

    for count_val in fractions.values():
        count += count_val * (count_val - 1) // 2

    return count

# # Example usage
N = 4
numerator = [1, 2, 2, 8]
denominator = [2, 4, 6, 12]

output = count_pairs_of_fractions(N, numerator, denominator)
print(output)  # Output: 2
