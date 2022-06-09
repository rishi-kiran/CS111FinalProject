#include <iostream>
#include <string>
#include <fstream>
#include <iomanip> 
#include "library.h"
using namespace std;

void get_option(int& option){
  cout << "These are your following options: " << endl;
  cout << "1. Statistics of 10 Hall of Fame NBA players in column format will be displayed followed by an analysis of the data." << endl;
  cout << "\n2. User will be asked to provide a free throw percentage 0-100 (without the percentage sign) so that the program can display the number of players above and below that percentage." << endl;
  cout << "\n3. User will be asked to provide an NBA player's last name, from the Hall of Fame, so that the program can display the career 3-point field goal percentage of that player." << endl;
  cout << "\n4. User will be asked to provide information about an NBA Hall of Famer of their choice to be inserted into the array." << endl;
  cout << "\n5. User will be asked to enter the first name of the NBA Hall of Famer that they want to be removed from the array." << endl;
  cout << "\n6. To exit." << endl;
  cout << "\nEnter the number of your choice and press the enter key: ";
  cin >> option;
}

void collect(HOFplayer players[], int& size, ifstream& fin){
  for(int i = 0; !fin.eof(); i++){
    fin >> players[i].first_name;
    fin >> players[i].last_name;
    fin >> players[i].year_inducted;
    fin >> players[i].games_played;
    fin >> players[i].points_per_game;
    fin >> players[i].rebounds_per_game;
    fin >> players[i].assists_per_game;
    fin >> players[i].steals_per_game;
    fin >> players[i].blocks_per_game;
    fin >> players[i].field_goal_percent;
    fin >> players[i].three_point_percent;
    fin >> players[i].free_throw_percent;
    size++;
  }
}
void display(const HOFplayer players[], int size){
  double Games_sum = 0;
  double PPG_sum = 0;
  double RPG_sum = 0;
  double APG_sum = 0;
  double SPG_sum = 0;
  double BPG_sum = 0;
  double highest_PPG = -1;
  double lowest_PPG = 100;

  cout << "*Note: PPG = Points Per Game, RPG = Rebounds Per Game, APG = Assists Per Game, SPG = Steals Per Game, BPG = Blocks Per Game, FG% = Field Goal Percentage, 3P% = 3-Point Percentage, FT% = Freethrow Percentage*" << endl;
  cout << "PLAYER NAME" << setw(13) << "YEAR" << setw(10) << "GAMES" << setw(10) << "PPG" << setw(10) << "RPG" << setw(10) << "APG" << setw(10) << "SPG" << setw(10) << "BPG" << setw(11) << "FG%" << setw(11) << "3P%" << setw(11) << "FT%" << endl;

  for(int i = 0; i < size; i++){
    string first_plus_last = players[i].first_name + " " + players[i].last_name;
    cout << left << fixed << showpoint << setprecision(1);
    cout << setw(20) << first_plus_last << players[i].year_inducted;
    cout << right;
    cout << setw(10) << players[i].games_played;
    cout << setw(10) << players[i].points_per_game;
    cout << setw(10) << players[i].rebounds_per_game;
    cout << setw(10) << players[i].assists_per_game;
    cout << setw(10) << players[i].steals_per_game;
    cout << setw(10) << players[i].blocks_per_game;
    cout << setw(10) << players[i].field_goal_percent << "%";
    cout << setw(10) << players[i].three_point_percent << "%";
    cout << setw(10) << players[i].free_throw_percent << "%" << endl;

    Games_sum += players[i].games_played;
    PPG_sum += players[i].points_per_game;
    RPG_sum += players[i].rebounds_per_game;
    APG_sum += players[i].assists_per_game;
    SPG_sum += players[i].steals_per_game;
    BPG_sum += players[i].blocks_per_game;

    if(players[i].points_per_game > highest_PPG){
      highest_PPG = players[i].points_per_game;
    }
    if(players[i].points_per_game < lowest_PPG){
      lowest_PPG = players[i].points_per_game;
    }
  }
  cout << "\nSummary Analyses: " << endl;
  cout << "Average Games: " << Games_sum/size << endl;
  cout << "Average PPG: " << PPG_sum/size << endl;
  cout << "Average RPG: " << RPG_sum/size << endl;
  cout << "Average APG: " << APG_sum/size << endl;
  cout << "Average SPG: " << SPG_sum/size << endl;
  cout << "Average BPG: " << BPG_sum/size << endl;
  cout << "Highest PPG: " << highest_PPG << endl;
  cout << "Lowest PPG: " << lowest_PPG << endl;
}

void above_below(const HOFplayer players[], int size){
  double ft_percent;
  int above = 0;
  int below = 0;
  string plural_or_singular;
  cout << "Enter a freethrow percentage 0-100 (without the percent sign) so that the program can display the number of players above and below the percentage: ";
  cin >> ft_percent;
  for(int i = 0; i < size; i++){
    if(players[i].free_throw_percent > ft_percent){
      above++;
    }
    else{
      below++;
    }
  }
  if(above == 1){
    cout << above << " player is above the freethrow percentage of " << ft_percent << "%" << endl;
  }
  else{
    cout << above << " players are above the freethrow percentage of " << ft_percent << "%" << endl;
  }
  if(below == 1){
    cout << below << " player is below the freethrow percentage of " << ft_percent << "%" << endl;
  }
  else{
    cout << below << " players are below the freethrow percentage of " << ft_percent << "%" << endl;
  }
}

void extract_threepoint_percent(const HOFplayer players[], int size){
  string player_last_name;
  bool stop = false;
  while(!stop){
    for(int i = 0; i < size; i++){
      cout << players[i].last_name << endl;
    }
    cout << "From the list of players last name above, choose one so that the program can display the three-point percentage of the player*If you enter a name not on the list then you will be prompted again*: ";
    cin >> player_last_name;
    for(int i = 0; i < size; i++){
      if(player_last_name == players[i].last_name){
        stop = true;
      }
    }
  }
  for(int i = 0; i < size; i++){
    if(players[i].last_name == player_last_name){
      cout << players[i].first_name << " " << players[i].last_name << " has a three-point percentage of " << players[i].three_point_percent << "%" << endl;
    }
  }
}

void user_input(HOFplayer& new_player){
  cout << "What is the NBA player's first name: ";
  cin >> new_player.first_name;
  cout << "What is the NBA player's last name: ";
  cin >> new_player.last_name;
  cout << "What year was the player inducted into the NBA Hall Of Fame: ";
  cin >> new_player.year_inducted;
  cout << "How many games did the player play: ";
  cin >> new_player.games_played;
  cout << "How many points did the player average per game: ";
  cin >> new_player.points_per_game;
  cout << "How many rebounds did the player average per game: ";
  cin >> new_player.rebounds_per_game;
  cout << "How many assists did the player average per game: ";
  cin >> new_player.assists_per_game;
  cout << "How many steals did the player average per game: ";
  cin >> new_player.steals_per_game;
  cout << "How many blocks did the player average per game: ";
  cin >> new_player.blocks_per_game;
  cout << "What was the player's field goal percentage (don't include the percent sign): ";
  cin >> new_player.field_goal_percent;
  cout << "What was the player's three point percentage (don't include the percent sign): ";
  cin >> new_player.three_point_percent;
  cout << "What was the player's freethrow percentage (don't include the percent sign): ";
  cin >> new_player.free_throw_percent;
}

void insert(HOFplayer new_player, HOFplayer players[], int& size){
  int pos = 0;
  while(new_player.first_name > players[pos].first_name && pos < size){
    pos++;
  }
  for(int i = size; i > pos; i--){
    players[i] = players[i - 1];
  }
  players[pos] = new_player;
  size++;
}

void erase(HOFplayer players[], int& size){
  string delete_player;
  int index = 0;
  bool stop = false;

  while(!stop){
    for(int i = 0; i < size; i++){
      cout << players[i].first_name << endl;
    }
    cout << "Of the players listed above what is the name of the player that you want to be deleted from the Hall Of Fame list*If you enter a name not on the list then you will be prompted again*: ";
    cin >> delete_player;
    for(int i = 0; i < size; i++){
      if(delete_player == players[i].first_name){
      stop = true;
      }
    }
  }

  while(delete_player != players[index].first_name){
    index++;
  }

  for(int i = index; i <= size -2; i++){
    players[i] = players[i+1];
  }
  size--;

}