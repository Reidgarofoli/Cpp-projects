#include <iostream>

class board {
    public:
        void showBoard();
        void move(int square, char move);
        void clear();
    private:
        char moves[10] = "012345678";
        int num_of_moves = 0;
};

void board::showBoard() {
    char buffer[14];
    if (num_of_moves == 0){
        std::cout << "|-----------|" << std::endl;
        std::cout << "|   |   |   |" << std::endl;
        std::cout << "| 0 | 1 | 2 |" << std::endl;
        std::cout << "|   |   |   |" << std::endl;
        std::cout << "|-----------|" << std::endl;
        std::cout << "|   |   |   |" << std::endl;
        std::cout << "| 3 | 4 | 5 |" << std::endl;
        std::cout << "|   |   |   |" << std::endl;
        std::cout << "|-----------|" << std::endl;
        std::cout << "|   |   |   |" << std::endl;
        std::cout << "| 6 | 7 | 8 |" << std::endl;
        std::cout << "|   |   |   |" << std::endl;
        std::cout << "|-----------|" << std::endl;
    } else {
        std::cout << "|-----------|" << std::endl;
        std::cout << "|   |   |   |" << std::endl;
        sprintf(buffer, "| %c | %c | %c |", moves[0], moves[1], moves[2]);
        std::cout << buffer << std::endl;
        std::cout << "|   |   |   |" << std::endl;
        std::cout << "|-----------|" << std::endl;
        std::cout << "|   |   |   |" << std::endl;
        sprintf(buffer, "| %c | %c | %c |", moves[3], moves[4], moves[5]);
        std::cout << buffer << std::endl;
        std::cout << "|   |   |   |" << std::endl;
        std::cout << "|-----------|" << std::endl;
        std::cout << "|   |   |   |" << std::endl;
        sprintf(buffer, "| %c | %c | %c |", moves[6], moves[7], moves[8]);
        std::cout << buffer << std::endl;
        std::cout << "|   |   |   |" << std::endl;
        std::cout << "|-----------|" << std::endl;
    }
}

void board::move(int square, char move) {
    num_of_moves++;
    moves[square] = move;
}
void board::clear() {
    num_of_moves = 0;
}

int main(int argc, char const *argv[])
{
    bool player_a = true;
    bool running = true;
    while (running){
        board one;
        std::cout << "----- NEW GAME -----\n\n";
        for (int i = 0; i < 10; i++){
            one.showBoard();
            if (player_a)
                std::cout << "Player A, Go\n";
            else
                std::cout << "Player B, Go\n";
            player_a = !player_a;
            int square; char move;
            std::cin >> square;
            char options[] = "012345678";
            for (int i = 0; i < 9; i++){

            }
            if (player_a)
                move = 'x';
            else
                move = 'o';
            
            if (move == 'x' || move == 'o')
                one.move(square, move);

            std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << (char)10 << (char)10 << (char)10 << (char)10 << (char)10;
        }
        one.clear();
    }
    return 0;
}
