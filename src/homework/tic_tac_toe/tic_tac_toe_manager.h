//h
#include "tic_tac_toe.h"
#include<iostream>
#include<memory>
#include<string>
#include<utility>
#include<vector>

#ifndef TIC_TAC_TOE_MANAGER_H 
#define TIC_TAC_TOE_MANAGER_H
class TicTacToeManager
{
public:
    TicTacToeManager() = default;
    void save_game(std::unique_ptr<TicTacToe>& game);
    void get_winner_totals(int& x, int& y, int& t);
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
private:
    std::vector<std::unique_ptr<TicTacToe>> games;
    int x_wins{0};
    int o_wins{0};
    int ties{0};
    void update_winner_account(std::string winner);
};
#endif 