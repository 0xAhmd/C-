/*
Lec 4
Functions in C++:
1. Function declaration
2. Function definition
3. Function parameters
4. Function return type
5. void function
functions in c++ are used to perform a specific task or set of tasks and return a value or no value 
*/



#include <iostream>
#include <vector>
#include <map>
using namespace std;

// Task 1: Function to add two numbers
int add_two_numbers(int num1, int num2) {
    return num1 + num2;
}

// Task 2: Function to check if a number is even
bool is_even(int num) {
    return num % 2 == 0;
}

// Task 3: Function to get the first element of a list
int get_first_element(const vector<int>& lst) {
    if (lst.empty()) {
        return -1; // or any default value indicating the list is empty
    }
    return lst[0];
}

// Task 4: Function to get the square of a number
int square(int num) {
    return num * num;
}

// Task 5: Greetings function
string Greetings(const string& name) {
    return "Abyad Ya Dawly " + name;
}

int main() {
    // Test Task 1
    cout << "add_two_numbers(2, 3): " << add_two_numbers(2, 3) << endl;

    // Test Task 2
    cout << "is_even(4): " << (is_even(4) ? "True" : "False") << endl;

    // Test Task 3
    vector<int> lst = {1, 2, 3};
    int firstElement = get_first_element(lst);
    if (firstElement != -1) {
        cout << "get_first_element({1, 2, 3}): " << firstElement << endl;
    } else {
        cout << "get_first_element({}): None" << endl;
    }

    // Test Task 4
    cout << "square(5): " << square(5) << endl;

    // Test Task 5
    cout << "Greetings(\"AT4\"): " << Greetings("AT4") << endl;

    return 0;
}



