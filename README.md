# binarySearchBot

## 🚀 Features

- Random number generation between 0 and 1.000.000.(you can control that.)
- Bot uses binary search to guess the number.
- Feedback after each guess (too high, too low).
- A delay between guesses to simulate the bot thinking.

## 🧑‍💻 Technologies Used

- `<iostream>`
- `<cstdlib>`
- `<thread>`
- `<chrono>`

## 📋 How to Run

### 🐧 On Linux:

1. Make sure `g++` is installed:
   ```bash
   sudo apt update
   sudo apt install g++   # Skip if already installed
   ```

2. Navigate to the folder where your code is saved:
   ```bash
   cd /path/to/your/file
   ```

3. Compile the code:
   ```bash
   g++ guess.cpp -o guessGame
   ```

4. Run the program:
   ```bash
   ./guessGame
   ```

### 🪟 On Windows (with MinGW):

1. Install MinGW and ensure it's added to your system PATH.
   (If you don’t have MinGW, download from: https://www.mingw-w64.org/)

2. Open CMD or PowerShell.

3. Navigate to the folder where your file is located:
   ```bash
   cd C:\path\to\your\file
   ```

4. Compile the code:
   ```bash
   g++ guess.cpp -o guessGame.exe
   ```

5. Run the program:
   ```bash
   guessGame.exe
   ```

## 🤖 How It Works

- The bot guesses a number within the range from 0 to 1.000.000.
- The bot will adjust its guess based on whether the guessed number is too high or too low compared to the secret number.
- The program uses a binary search algorithm to efficiently find the secret number.
