#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct HOFplayer{
  string first_name, last_name;
  int year_inducted, games_played;
  double points_per_game, rebounds_per_game, assists_per_game, steals_per_game, blocks_per_game;
  double field_goal_percent, three_point_percent, free_throw_percent;
};

void get_option(int& option);

void collect(HOFplayer players[], int& size, ifstream& fin);

void display(const HOFplayer players[], int size);

void above_below(const HOFplayer players[], int size);

void extract_threepoint_percent(const HOFplayer players[], int size);

void user_input(HOFplayer& new_player);

void insert(HOFplayer new_player, HOFplayer players[], int& size);

void erase(HOFplayer players[], int& size);