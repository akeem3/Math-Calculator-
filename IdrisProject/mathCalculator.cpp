/*
Author: <HASSAN IDRIS OLASUNKANMI>
Subject: <CSC 1511> <COMPUTER PROGRAMMING>
Assignment 02: <Objective is to understand the use of random numbers with functions in a maths game>
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

void menu();
int greaterOrNot();
void fourRandomNums();
int sumOfDigits();
int addition();

int main() {
    int choice;
    do {
        menu();
        std::cin >> choice;
        switch (choice) {
        case 1:
            greaterOrNot();
            break;
        case 2:
            fourRandomNums();
            break;
        case 3:
            sumOfDigits();
            break;
        case 4:
            addition();
            break;
        default:
            std::cout << "Invalid selection. Please choose a number between 1 and 4.\n";
            break;
        }
    } while (choice < 1 || choice > 4);
    return 0;
}

void menu() {
    std::cout << "*****   MATH GAMES   *****\n\n"
        << "1. Great or No?\n"
        << "2. Four Random Numbers\n"
        << "3. Adding Two Digits Random Numbers\n"
        << "4. Adding Numbers\n\n"
        << "Enter a selection from the menu: ";
}

int greaterOrNot() {
    srand(time(0));
    int randNum1 = rand() % 500 + 1;
    int randNum2 = rand() % 500 + 1;
    int integer;
    std::cout << "Enter an integer: ";
    std::cin >> integer;
    if (integer > randNum1) {
        std::cout << integer << " is greater than " << randNum1 << ".\n";
        return integer;
    }
    else {
        std::cout << randNum1 << " is greater than " << integer << ".\n";
        return randNum1;
    }
}

void fourRandomNums() {
    srand(time(0));
    int randNum1 = rand() % 500 + 1;
    int randNum2 = rand() % 500 + 1;
    int randNum3 = rand() % 500 + 1;
    int randNum4 = rand() % 500 + 1;
    std::cout << "Random numbers: " << randNum1 << " " << randNum2 << " " << randNum3 << " " << randNum4 << "\n";

    bool andResult = ((randNum1 >= randNum2) && !(randNum3 == randNum4));
    bool orResult = ((randNum1 >= randNum2) || !(randNum3 == randNum4));

    std::cout << "AND operation result: " << (andResult ? "TRUE" : "FALSE") << "\n";
    std::cout << "OR operation result: " << (orResult ? "TRUE" : "FALSE") << "\n";
}

int sumOfDigits() {
    srand(time(0));
    int randNum = rand() % 90 + 10;
    if (randNum < 10 || randNum > 99) {
        std::cout << "Error: Invalid input, please enter a 2-digit random number." << std::endl;
        return -1;
    }
    int digit1 = randNum / 10;
    int digit2 = randNum % 10;
    std::cout << "The random number is: " << randNum << std::endl;
    int sum = digit1 + digit2;
    std::cout << digit1 << " + " << digit2 << " = ";
    return sum;
}

int addition() {
    srand(time(0));
    int randNum1 = rand() % 900 + 100;
    int randNum2 = rand() % 900 + 100;
    int sum, answer;
    std::cout << randNum1 << " + " << randNum2 << " = ";
    std::cin >> answer;
    sum = randNum1 + randNum2;
    if (answer == sum) {
        std::cout << "Congratulations! Your answer is correct.\n";
    }
    else {
        std::cout << "Incorrect. The correct answer is " << sum << ".\n";
    }
    return sum;
}
