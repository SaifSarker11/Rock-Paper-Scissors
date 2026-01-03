# Rock-Paper-Scissors Game

A simple console-based Rock-Paper-Scissors game implemented in C++.

## Description

This is a classic Rock-Paper-Scissors game where you play against the computer. The game prompts the user to choose Rock, Paper, or Scissors, generates a random choice for the computer, and determines the winner based on the standard rules:

- Rock beats Scissors
- Scissors beats Paper
- Paper beats Rock
- Same choices result in a tie

## Features

- User-friendly console interface
- Input validation for user choices
- Random computer choice generation
- Clear display of choices and results

## Requirements

- C++ compiler (e.g., g++, clang++)
- Standard C++ libraries (iostream, cstdlib, ctime)

## How to Compile and Run

1. Ensure you have a C++ compiler installed on your system.

2. Navigate to the project directory:
   ```
   cd Rock-Paper-Scissors/src
   ```

3. Compile the program:
   ```
   g++ RockPaperScissors.cpp -o rock_paper_scissors
   ```

4. Run the executable:
   ```
   ./rock_paper_scissors
   ```

## How to Play

1. When prompted, enter your choice:
   - 'R' for Rock
   - 'P' for Paper
   - 'S' for Scissors

2. The computer will make its choice randomly.

3. The game will display both choices and announce the winner.

## Code Structure

- `RockPaperScissors.cpp`: Main source file containing all game logic
  - `UserChoice()`: Gets and validates user input
  - `ComputerChoice()`: Generates random computer choice
  - `showChoice()`: Displays the choice (Rock, Paper, or Scissors)
  - `showWinner()`: Determines and displays the game result
  - `main()`: Orchestrates the game flow

## Contributing

Feel free to fork this project and submit pull requests for improvements or bug fixes.

## License

This project is open source and available under the [MIT License](LICENSE).
