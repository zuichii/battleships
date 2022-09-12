#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player{
    public:

        char recentMove;
        int numMoves;


        void move();
        string getMoves();
        char getMove();
        bool win(Player * opponent);
};

#endif