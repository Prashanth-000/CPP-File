#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
     srand(static_cast<unsigned int>(time(0)));
     int secretNumber = rand() % 100 + 1;
     int guess;
     int attempts = 0;

     cout << "Welcome to the number guessing game!\n";
     cout << "Try to guess the number betweeen 1 and 100.\n";

     do
     {
          cout << "Enter your guess: ";
          cin >> guess;
          attempts++;

          if (guess > secretNumber)
          {
               cout << "Too high! try again \n";
          }
          else if (guess < secretNumber)
          {
               cout << "Too low! guess again\n";
          }
          else
          {
               cout << "Congratulations! yow guessed the nnumberin " << attempts << " attempts\n";
          }
     } while (guess != secretNumber);
     return 0;
}
