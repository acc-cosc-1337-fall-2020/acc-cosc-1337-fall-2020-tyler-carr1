#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
#include<string>

using std::cout, std::cin, std::string;

int main() 
{
  //set variables
  TicTacToe p;
  TicTacToeManager m;
  string starting_player;
  string winning_player;
  char choice;
  bool end_game = false;

  do
  {
    //prompt user for player choice
    cout<<"Enter which player you are (X or O): ";
    cin>>starting_player;

    //set first player
    p.start_game(starting_player);
    do
    {
      //calling overloaded operator for input
      cin>>p;
      
      //calling overloaded operator for output
      cout<<p;

      //validating if game is Over
      end_game = p.game_over();

    }while(end_game==false);
    
    winning_player = p.get_winner();

    m.save_game(p);
    cout<<"Game over, the winner is: "<<winning_player<<"\n"<<"Would you like to play again?";
    cin>>choice;
    cout<<"\n";

  }while(choice == 'y' || choice == 'Y');
  
  int x;
  int o;
  int t;

  m.get_winner_total(x, o, t);

  cout<<m;
  

	return 0;
}