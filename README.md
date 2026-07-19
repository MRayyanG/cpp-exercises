# cpp-exercises

A collection of console-based C++ programs built to practice foundational programming concepts like control flow, loops, input validation, and functions before college classes start in September.

## Projects Overview

### 1. Menu-Driven Calculator (`Console_Calculator.cpp`)
A modular calculator application that utilizes an infinite `while(true)` loop to remain active until the user chooses to exit. 
* **Key Features:**
  * Implements input validation to handle and block division-by-zero errors.
  * Uses `<iomanip>` stream manipulators (`std::fixed`, `std::setprecision`) configured outside the main loop for optimal formatting.
  * Modularized using distinct functions for mathematical operations.

### 2. Rock, Paper, Scissors Game (`rock_paper_scissors.cpp`)
A terminal-based implementation of the classic game played against a randomized computer opponent.
* **Key Features:**
  * Uses a `do-while` game loop that triggers a rematch in the event of a tie.
  * Handles random number seeding using `srand(time(0))` to ensure unique outcomes every game.
  * Evaluates win/loss combinations using `if-else if` structures.

### 3. Number Guessing Game (`guess_number.cpp`)
An interactive game where the player attempts to guess a randomly generated number within a 0 to 20 range.
* **Key Features:**
  * Utilizes nested loops to trap and filter out invalid user choices.
  * Initializes the guess variable out-of-bounds (`-1`) to guarantee initial loop execution.
  * Provides real-time high/low tracking hints to guide the user.

## Core Concepts Practiced
* **Input Validation:** Trapping user input with conditional loops (`do-while`) to enforce valid data boundaries.
* **Modular Design:** Breaking tasks into single-responsibility functions with local variable scopes.
* **Stream Manipulation:** Controlling text output structure and numeric precision formatting.
* **Loop Mechanics:** Implementation of traditional conditional loops alongside controlled infinite structures.
