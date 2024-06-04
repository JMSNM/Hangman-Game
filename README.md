Overview
This project is a C++ implementation of the classic Hangman game with a twist: the words to guess are names of countries. The player has to guess the letters of a randomly selected country name within a limited number of attempts. The game provides visual feedback on the progress of the hangman figure as incorrect guesses are made.

Features
Random Country Selection: The game randomly selects a country from a predefined list.
Guessing Mechanism: The player inputs letters to guess the country name.
Visual Feedback: The hangman figure is displayed and updated with each incorrect guess.
Win/Loss Conditions: The game checks for win or loss conditions and displays an appropriate message.
Requirements
A C++ compiler (e.g., GCC, Clang)
Standard C++ libraries
Usage
Compile the program:
bash
Copy code
g++ -o hangman hangman.cpp
Run the program:
bash
Copy code
./hangman
How to Play
Start the Game: The program will start by displaying a prompt to guess a letter.
Input Letters: The player inputs letters to guess the country name. Each correct guess reveals the letter in the country name.
View Progress: The game updates the displayed country name with each guess and shows the hangman figure with each incorrect guess.
Win/Loss Conditions: The game ends when the player either correctly guesses the country name or runs out of attempts. A message is displayed indicating whether the player won or lost.
Code Explanation
The program consists of the following key components:

Helper Functions:

len: Calculates the length of a string.
design: Displays the hangman figure based on the number of remaining attempts.
Main Function:

Initializes a list of countries.
Randomly selects a country from the list.
Manages the main game loop, handling user input, updating game state, and checking win/loss conditions.
Key Functions
len: Calculates the length of a given string.
design: Displays the hangman figure corresponding to the current state of the game.
main: Orchestrates the game logic, including random country selection, user input processing, and game state updates.
