#include <iostream>
#include <map>
#include <random>

constexpr int MAX_POSITION = 100;

void clearScreen() {
    // Use system calls to clear the screen based on the operating system
    #ifdef _WIN32 // Windows
        system("cls");
    #else // Linux and macOS
        system("clear");
    #endif
}

// Player class
class Player {
private:
    int position;

public:
    Player() : position(0) {}

    // Getter for position
    int getPosition() const {
        return position;
    }

    // Function to roll the dice
    int diceRoll() const {
        static std::random_device rd;
        static std::mt19937 gen(rd()); // Mersenne Twister generator
        std::uniform_int_distribution<> dis(1, 6);
        return dis(gen);
    }

    // Function to move player
    void move(int newPosition) {
        if (newPosition <= MAX_POSITION) {
            position = newPosition;
        } else {
            std::cout << "Roll exceeds the board limit, try again.\n";
        }
    }
};

// Board class
class Board {
private:
    std::map<int, int> snakes;
    std::map<int, int> ladders;

public:
    int s1s = 14, s1e = 7; // Snake 1
    int s2s = 30, s2e = 90; // Snake 2
    int L1s = 12, L1e = 35; // Ladder 1
    int L2s = 23, L2e = 88; // Ladder 2
    Board() {
        // Snakes and ladders are initialized
        snakes = {
            {s1s, s1e}, {s2s, s2e}
        };

        ladders = {
            {L1s, L1e}, {L2s, L2e}
        };
    }

    // Method to handle snakes and ladders
    int configurePosition(int position) const {
        // Check if the player lands on a snake
        if (snakes.find(position) != snakes.end()) {
            std::cout << "Oops! Landed on a snake at " << position << ", sliding down to " << snakes.at(position) << ".\n";
            return snakes.at(position);
        }
        // Check if the player lands on a ladder
        if (ladders.find(position) != ladders.end()) {
            std::cout << "Yay! Landed on a ladder at " << position << ", climbing up to " << ladders.at(position) << ".\n";
            return ladders.at(position);
        }
        return position; // No snake or ladder, return the current position
    }

    // Original draw_board function for visualizing player positions
    void draw_board(const Player& p1, const Player& p2) {
        int b_num = MAX_POSITION; // box number
        for (int i = 1; i <= 101; i++) // top line
        {
            std::cout << "=";
        }
        std::cout << std::endl;
        for (int i = 1; i <= 30; i++) {
            if (i % 3 != 0) {
                for (int j = 1; j < 12; j++) // for boxes
                {
                    std::cout << "|";
                    for (int k = 1; k <= 9; k++) {
                        std::cout << " ";
                    }
                }
                std::cout << std::endl;
            }
            if (i % 3 == 0) {
                for (int p = 1; p <= 10; p++) // last line having position of players and box numbers
                {
                    std::cout << "|";
                    // setting player 1 place
                    if (p1.getPosition() == b_num) {
                        std::cout << "P1 "; // Player 1
                    } else {
                        std::cout << "   ";
                    }
                    // setting box number
                    if (b_num == 100) {
                        std::cout << " W ";
                    } else if (b_num == s1s) { // setting snake 1 start
                        std::cout << "S1S";
                    } else if (b_num == s1e) { // setting snake 1 end
                        std::cout << "S1E";
                    } else if (b_num == s2s) { // setting snake 2 start
                        std::cout << "S2S";
                    } else if (b_num == s2e) { // setting snake 2 end
                        std::cout << "S2E";
                    } else if (b_num == L1s) { // setting Ladder 1 start
                        std::cout << "L1S";
                    } else if (b_num == L1e) { // setting Ladder 1 end
                        std::cout << "L1E";
                    } else if (b_num == L2s) { // setting Ladder 2 start
                        std::cout << "L2S";
                    } else if (b_num == L2e) { // setting Ladder 2 end
                        std::cout << "L2E";
                    } else if (b_num < 10) {
                        std::cout << "0" << b_num << " ";
                    } else {
                        std::cout << b_num << " ";
                    }
                    // setting player 2 place
                    if (p2.getPosition() == b_num) {
                        std::cout << " P2"; // Player 2
                    } else {
                        std::cout << "   ";
                    }
                    b_num--;
                }
                std::cout << "|"; // ending |
                std::cout << std::endl;
                for (int i = 1; i <= 101; i++) {
                    std::cout << "=";
                }
                std::cout << std::endl;
            }
        }
    }
};

// Game Logic
int main() {
    Player player1, player2;
    Board gameBoard;

    int turn = 1;
    bool gameFinished = false;

    while (!gameFinished) {
                // Draw the board to visualize player positions
        gameBoard.draw_board(player1, player2);
        Player& currentPlayer = (turn % 2 == 1) ? player1 : player2;
        std::cout << "Player " << (turn % 2 == 1 ? "1" : "2") << "'s turn. Press enter to roll the dice.";
        std::cin.get(); // Pause, waiting for user to press Enter

        int roll = currentPlayer.diceRoll();
        std::cout << "You rolled a " << roll << ".\n";

        int newPosition = currentPlayer.getPosition() + roll;
        newPosition = gameBoard.configurePosition(newPosition);
        currentPlayer.move(newPosition); // Move to the new position

        std::cout << "Player " << (turn % 2 == 1 ? "1" : "2") << " is now on square " << currentPlayer.getPosition() << ".\n";



        // Check for game end condition
        if (currentPlayer.getPosition() >= MAX_POSITION) {
            std::cout << "Player " << (turn % 2 == 1 ? "1" : "2") << " wins!\n";
            gameFinished = true;
        }

        std::cout << "\nPress Enter to continue to the next turn...";
        std::cin.get(); // Pause before the next player's turn
        clearScreen();
        turn++;
    }

    return 0;
}
