#include "project/exercise.hpp"
#include <algorithm>
#include <cctype>
#include <string>
#include <iostream>

// Exercise 1: sum all values from 1 to 100
int sum_1_to_100() {
    int sum = 0;
    for (int i = 1; i <= 100; ++i) {
        sum += i;
    }
    return sum;
}

// Exercise 2: factorial of n
int factorial(int n) {
    // TODO: Add the code to compute factorial.
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Exercise 3: check if a number is even
bool is_even(int value) {
    // TODO: Add code to return true if value is even.
    return (value % 2 == 0);
}

// Exercise 4: maximum value in an array
int max_value(const int arr[], int size) {
    // TODO: Add code to find the maximum value.
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Exercise 5: minimum value in an array
int min_value(const int arr[], int size) {
    // TODO: Add code to find the minimum value.
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Exercise 6: average of array values
double average_of_array(const int arr[], int size) {
    // TODO: Add code to compute the average.
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return (static_cast<double>(sum) / size);
}

// Exercise 7: sum of digits in an integer
int sum_of_digits(int n) {
    // TODO: Add code to add all digits in n.
    int sum = 0;
    n = std::abs(n); // Handle negative numbers
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Exercise 8: reverse a string
std::string reverse_string(const std::string& text) {
    std::string reversed_text = text;
    std::reverse(reversed_text.begin(), reversed_text.end());
    return reversed_text;
}

// Exercise 9: count vowels in a string
int count_vowels(const std::string& text) {
    // TODO: Add code to count vowels.
    int count = 0;
    for (char c : text) {
        char lower_c = std::tolower(static_cast<unsigned char>(c));
        if (lower_c == 'a' || lower_c == 'e' || lower_c == 'i' || lower_c == 'o' || lower_c == 'u') {
            ++count;
        }
    }
    return count;
}

// Exercise 10: determine whether a number is prime
bool is_prime(int n) {
    // Add code
    if (n <= 1) {
        return false;
    }
    if (n==2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= std::sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Exercise 11: power function
int power(int base, int exponent) {
    // TODO: Add code to compute base^exponent.
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

// Exercise 12: nth Fibonacci number
int fibonacci(int n) {
    // TODO: Add code to compute the nth Fibonacci number.
    if (n <= 1) {
        return n;
    }
    int prev2 = 0;
    int prev1 = 1;
    int current;
    for (int i = 2; i <= n; ++i) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}
