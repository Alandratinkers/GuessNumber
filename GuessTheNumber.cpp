// GuessTheNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    int guess;
    int number;
    bool done = false;
    int teller =0;

    srand((unsigned)time(NULL));
    number = rand();
    number = number % 100;

    std::cout << "Can you guess the number I have in my mind?\n";
    std::cout << "Pick a number between 1 and 100!\n";

    while (done == false)
    {
        std::cin >> guess;

        if (guess < 1 || guess > 100)
        {
            // number not in range
            std::cout << "Sorry your number is not in range or not a number \n";
            done = true;
        }
        else
        {
            // your guess is right so you can play
            if (guess > number)
            {
                std::cout << "Lower! \n";
                teller++;

            }
            if (guess < number)
            {
                std::cout << "Higher! \n";
                teller++;
            }
            if (guess == number)
            {
                std::cout << "Congratulations! You guessed the number! \n";
                std::cout << "it took you " << teller << " times to guess it right! \n";
                done = true;
            }

        }
    }
 

    }


