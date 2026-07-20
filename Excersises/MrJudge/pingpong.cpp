#include "pingpong.h"
using namespace std;

string winner(string S) {
    int rarGames = 0, potatoGames = 0;
    int rarPoints = 0, potatoPoints = 0;

    for (char c : S) {
        if (c == 'R')
            rarPoints++;
        else
            potatoPoints++;

        // Check if the current game has ended
        if ((rarPoints >= 11 || potatoPoints >= 11) &&
            abs(rarPoints - potatoPoints) >= 2) {

            if (rarPoints > potatoPoints)
                rarGames++;
            else
                potatoGames++;

            // Match winner
            if (rarGames == 3)
                return "Rar";
            if (potatoGames == 3)
                return "Potato";

            // Start next game
            rarPoints = 0;
            potatoPoints = 0;
        }
    }

    return "";
}
