# Tic Tac Toe Game in C++

A simple two-player Tic Tac Toe game implemented in C++. Players take turns to place their mark ('x' or '0') on the board until one player wins or the game results in a draw.

![mygif](https://s6.gifyu.com/images/S8sJ5.gif)

## Features

- Two-player game.
- Players input their moves by specifying a number between 1 and 9.
- Checks for valid moves.
- Displays the current state of the board after every move.
- Determines and announces the winner or if the game results in a draw.

## How to Compile and Run

1. Save the given code to a file named `tic_tac_toe.cpp`.
2. Compile the code using a C++ compiler:
   ```
   g++ -o tic_tac_toe tic_tac_toe.cpp
   ```
3. Run the compiled program:
   ```
   ./tic_tac_toe
   ```

## Gameplay Example

```
TIC TAC TOE
PLAYER 0 - PLAYER 1
   |   |   
 1 | 2 | 3 
___|___|___
   |   |   
 4 | 5 | 6 
___|___|___
   |   |   
 7 | 8 | 9 
   |   |   

Player 0, enter a number between 1 and 9 (both inclusive) : 5

TIC TAC TOE
PLAYER 0 - PLAYER 1
   |   |   
 1 | 2 | 3 
___|___|___
   |   |   
 4 | x | 6 
___|___|___
   |   |   
 7 | 8 | 9 
   |   |   

... and so on.
```

## Game End

The game ends when:
- One of the players has three of their marks in a horizontal, vertical, or diagonal row.
- All of the positions on the board are filled, resulting in a draw.

## Code Structure

The code primarily consists of the following functions:
- `printBoard()`: Displays the current state of the board.
- `makeMove(bool player)`: Accepts and validates the player's move.
- `checkWin()`: Checks if the current player has won.
- `checkDraw()`: Checks if the game is a draw.
- `main()`: The main game loop where players take turns making moves until a win or draw condition is met.
