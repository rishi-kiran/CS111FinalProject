#include <iostream>
#include <string>
#include <fstream>
#include <iomanip> 
#include "library.h"
using namespace std;

int main() {
  ifstream fin("input.dat");
  HOFplayer players[50];
  int size = 0;
  bool exit;
  int option;
  HOFplayer new_player;
  if(!fin.is_open()){
    cout << "File cannot be opened";
    return -1;
  }
  collect(players, size, fin);
  while(!exit){
    get_option(option);
    if(option == 1){
      display(players, size);
      cout << "User chose to display the statistics in column format." << endl << endl;
    }
    else if(option == 2){
      above_below(players, size);
      cout << "User chose to display the number of players above and below the user's inputted percentage." << endl << endl;
    }
    else if(option == 3){
      extract_threepoint_percent(players, size);
      cout << "User chose to display the career 3-point field goal percentage of the player inputted." << endl << endl;
    }
    else if(option == 4){
      user_input(new_player);
      insert(new_player, players, size);
      cout << "User chose to add a new element to the array." << endl;
    }
    else if(option == 5){
      erase(players, size);
      cout << "User chose to remove an element from the array." << endl;
    }
    else if(option == 6){
      exit = true;
      cout << "User chose to exit. Thank you for using the program" << endl;
    }
    else{
      cout << "Invalid input. Please choose another valid option." << endl;
    }
  }
}