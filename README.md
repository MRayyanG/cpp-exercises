# cpp-exercises

A collection of C++ programs practicing the basics like loops, if-else statements, functions, and getting user input to work properly.

## Projects

### 1. Menu-Driven Calculator (`Console_Calculator.cpp`)
A calculator app that keeps running until you choose to exit. You can do basic math operations.
- Prevents crashes when dividing by zero
- Makes numbers display nicely with proper decimal places
- Broken into separate functions instead of one giant mess
- Uses `while(true)` to make it loop until you exit

### 2. Rock, Paper, Scissors Game (`rock_paper_scissors.cpp`)
A simple game where you play against the computer. The computer picks randomly.
- `do-while` loop for replays when there's a tie
- Random numbers with `srand(time(0))`
- Uses `if-else if` to check who wins
- Game logic that actually works

### 3. Number Guessing Game (`guess_number.cpp`)
You try to guess a random number between 0 and 20. The game tells you if you're too high or too low.
- Nested loops that keep asking until you guess right
- Traps bad input and asks again
- Gives hints to help you figure it out
- Simple but works

## How to Run

**Compile and run any of these:**

```bash
g++ Console_Calculator.cpp -o calculator
./calculator
```

```bash
g++ rock_paper_scissors.cpp -o rps
./rps
```

```bash
g++ guess_number.cpp -o guessing_game
./guessing_game
```

You need g++ installed (comes with most Linux/Mac systems, or MinGW on Windows).

## Author
Made by MRayyanG
