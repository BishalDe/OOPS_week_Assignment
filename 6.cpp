
/*
Write a C++ program to guess a number between 1 to 9. Note : User is prompted to enter a guess. If the user guesses wrong then the prompt appears again until the guess is correct, on successful guess, user will get a "Well guessed!" message, and the program will exit.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int num = rand() % 9 + 1;
    int a = 0;
    while (a != num)
    {
        cout << "Enter Your Guess Number : ";
        cin >> a;
    }
    cout << "Thats Correct..!, Well Gussed";
    
    return 0;
}