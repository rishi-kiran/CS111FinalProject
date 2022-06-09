Project Proposal
The data I plan to work with comes from NBA Hall of Famers. This data includes the player's first name, player's last name, year inducted into the hall of fame, number of games played, career average points per game, career average rebounds per game, career average assists per game, career average steals per game, career average blocks per game, career field goal percentage, career 3-point field goal percentage, and career free throw percentage. 

The array will be sorted alphabetically by the players first name.

Summary analyses that I plan to perform is the average games, points per game, rebounds per game, assists per game, steals per game, and blocks of all 10 players in the input.dat file. In addition, the program will find the highest and lowest career average points per game of the 10 players in the input.dat file.

For the query based on a numeric data member the program will ask the user to enter a free throw percentage and display the number of players above and below that percentage.

For the query based on a non-numeric data member the program will ask the user to enter a players name, that is included in the input.dat file, and display the career 3-point field goal percentage of that player.

Source: https://www.basketball-reference.com/awards/hof.htm

Progress Update #1:
I have not made any changes regarding the plan for my project. I have still decided, for the query based on a numeric data member, to ask the user to input a freethrow percent so that the program can display the number of players above and below the percentage. In addition I have still decided, for the query based on a non-numeric data member, to ask the user for a players last name so that the program can display the three-point percentage of that player. Both have these queries have been implemented into the main.

In my input.dat file I have sorted the data alphabetically by the players first name. 

The summary analyses I performed was the average games played, average points per game, average rebounds per game, average assists per game, average steals per game, and average blocks per game of all players in the input file. In addition, the summary analysis includes the highest points per game as well as the lowest points per game of the data.

Progress Update #2:
I have not made any changes regarding the plan for my project. 

For the erase function the program is asking the user to enter the first name of the NBA Hall of Famer they want to be deleted from the array. To test this they could type in 'Grant' in order to delete the data of the first player in the array. They could also type 'Kobe' in order to delete the data of a player in the middle of the array. Also, they could type 'Yao' in order to delete the data of the last person in the array. 

For the insert function, a sample user input could type in the information of NBA Hall of Famer Jason Kidd. Since the program sorts by first name it will take 'Jason' and compare it to the other first names in the array. After doing this, Jason Kidd's stats will be stored in the index after Grant Hill's stats. Also, if the user wanted to insert Reggie Miller's data then the program would place Reggie Miller's data in the index after Ray Allen's data.

******************************************************
PROJECT REPORT:
The first feature I was able to accomplish was creating a menu in the main that repeatedly gives the user a number of options to choose from. The first option displays to the user statistics of the different NBA Hall of Fame players in the array along with a summary of analysis below the table. The second option is a query based on a numeric data member. The third option is a query based on a non-numeric data member. The fourth option gives the user an opportunity to enter statistics about an NBA Hall of Famer of their choice which will then be inserted into the array in its correct slot based alphabetically on the first name of the player. The fifth option gives the user the opportunity to delete a players information from the array. The sixth option allows the user to exit the program. 
The sample run of the menu:
These are your following options: 
1. Statistics of 10 Hall of Fame NBA players in column format will be displayed followed by an analysis of the data.

2. User will be asked to provide a free throw percentage (without the percentage sign) so that the program can display the number of players above and below that percentage.

3. User will be asked to provide an NBA player's last name, from the Hall of Fame, so that the program can display the career 3-point field goal percentage of that player.

4. User will be asked to provide information about an NBA Hall of Famer of their choice to be inserted into the array.

5. User will be asked to enter the first name of the NBA Hall of Famer that they want to be removed from the array.

6. To exit.

Enter the number of your choice and press the enter key:

The second feature I was able to accomplish was taking the array of NBA Hall of Famers statistics and organizing it into a table of column format that displays the player's first name, player's last name, year inducted into the hall of fame, number of games played, career average points per game, career average rebounds per game, career average assists per game, career average steals per game, career average blocks per game, career field goal percentage, career 3-point field goal percentage, and career free throw percentage. In additon, I was able to do analysis on the different statistics below the table. If the user enters 1 into the menu then a table will show up as shown below:
*Note: PPG = Points Per Game, RPG = Rebounds Per Game, APG = Assists Per Game, SPG = Steals Per Game, BPG = Blocks Per Game, FG% = Field Goal Percentage, 3P% = 3-Point Percentage, FT% = Freethrow Percentage*
PLAYER NAME         YEAR     GAMES       PPG       RPG       APG       SPG       BPG        FG%        3P%        FT%
Grant Hill          2018      1026      16.7       6.0       4.1       1.2       0.6      48.3%      31.4%      76.9%
John Stockton       2009      1504      13.1       2.7      10.5       2.2       0.2      51.5%      38.4%      82.6%
Kevin Garnett       2020      1462      17.8      10.0       3.7       1.3       1.4      49.7%      27.5%      78.9%
Kobe Bryant         2020      1346      25.0       5.2       4.7       1.4       0.5      44.7%      32.9%      83.7%
Michael Jordan      2009      1072      30.1       6.2       5.3       2.3       0.8      49.7%      32.7%      83.5%
Ray Allen           2018      1300      18.9       4.1       3.4       1.1       0.2      45.2%      40.0%      89.4%
Steve Nash          2018      1217      14.3       3.0       8.5       0.7       0.1      49.0%      42.8%      90.4%
Tim Duncan          2020      1392      19.0      10.8       3.0       0.7       2.2      50.6%      17.9%      69.6%
Tracy McGrady       2017       938      19.6       5.6       4.4       1.2       0.9      43.5%      33.8%      74.6%
Yao Ming            2016       486      19.0       9.2       1.6       0.4       1.9      52.4%      20.0%      83.3%

Summary Analyses: 
Average Games: 1174.3
Average PPG: 19.4
Average RPG: 6.3
Average APG: 4.9
Average SPG: 1.2
Average BPG: 0.9
Highest PPG: 30.1
Lowest PPG: 13.1

The third feature I was able to accomplish was a query based on a numeric data member. In this query the program asks the user to enter a freethrow percentage 0-100 (without the percentage sign) so that the program can display the number of players above and below that percentage. If the user inputs 2 into the menu then the following will show up on the users screen.
Sample run:
Enter a freethrow percentage 1-100 (without the percent sign) so that the program can display the number of players above and below the percentage: 90
1 player is above the freethrow percentage of 90%
9 players are below the freethrow percentage of 90%
User chose to display the number of players above and below the user's inputted percentage.

The fourth feature I was able to accomplish was a query based on a non-numeric data member. In this query the program asks the user to enter an NBA player's last name, from the Hall of Fame, so that the program can display the career 3-point field goal percentage of that player. The program will first provide a list of last names from the array so that the user knows what options are available. If the user doesn't enter a valid last name then the program will prompt the question again.
Sample run:
Hill
Stockton
Garnett
Bryant
Jordan
Allen
Nash
Duncan
McGrady
Ming
From the list of players last name above, choose one so that the program can display the three-point percentage of the player*If you enter a name not on the list then you will be prompted again*: Nash
Steve Nash has a three-point percentage of 42.8%
User chose to display the career 3-point field goal percentage of the player inputted.

The fifth feature the program was able to accomplish was asking the user information about an NBA Hall of Famer of their choice to be inserted into the array. After the user enters information about the player they want to be inserted into the array they can type 1 into the menu so that the can see their player displayed in the table. No matter what player the user enters the list of players in the array will be sorted alphabetically by the players first name. If the user enters the number 4 into the menu the following will occur: 
What is the NBA player's first name: Jason
What is the NBA player's last name: Kidd
What year was the player inducted into the NBA Hall Of Fame: 2018
How many games did the player play: 1391
How many points did the player average per game: 12.6
How many rebounds did the player average per game: 6.0
How many assists did the player average per game: 4.1
How many steals did the player average per game: 1.2
How many blocks did the player average per game: 0.6
What was the player's field goal percentage (don't include the percent sign): 48.3
What was the player's three point percentage (don't include the percent sign): 31.4
What was the player's freethrow percentage (don't include the percent sign): 76.9
User chose to add a new element to the array.

The user can then type 1 into the menu so that a table can display all the players (even the one they included) along with their statistics as shown below:
*Note: PPG = Points Per Game, RPG = Rebounds Per Game, APG = Assists Per Game, SPG = Steals Per Game, BPG = Blocks Per Game, FG% = Field Goal Percentage, 3P% = 3-Point Percentage, FT% = Freethrow Percentage*
PLAYER NAME         YEAR     GAMES       PPG       RPG       APG       SPG       BPG        FG%        3P%        FT%
Grant Hill          2018      1026      16.7       6.0       4.1       1.2       0.6      48.3%      31.4%      76.9%
Jason Kidd          1391        12       0.6       6.0       4.1       1.2       0.6      48.3%      31.4%      76.9%
John Stockton       2009      1504      13.1       2.7      10.5       2.2       0.2      51.5%      38.4%      82.6%
Kevin Garnett       2020      1462      17.8      10.0       3.7       1.3       1.4      49.7%      27.5%      78.9%
Kobe Bryant         2020      1346      25.0       5.2       4.7       1.4       0.5      44.7%      32.9%      83.7%
Michael Jordan      2009      1072      30.1       6.2       5.3       2.3       0.8      49.7%      32.7%      83.5%
Ray Allen           2018      1300      18.9       4.1       3.4       1.1       0.2      45.2%      40.0%      89.4%
Steve Nash          2018      1217      14.3       3.0       8.5       0.7       0.1      49.0%      42.8%      90.4%
Tim Duncan          2020      1392      19.0      10.8       3.0       0.7       2.2      50.6%      17.9%      69.6%
Tracy McGrady       2017       938      19.6       5.6       4.4       1.2       0.9      43.5%      33.8%      74.6%
Yao Ming            2016       486      19.0       9.2       1.6       0.4       1.9      52.4%      20.0%      83.3%

Summary Analyses: 
Average Games: 1068.6
Average PPG: 17.6
Average RPG: 6.3
Average APG: 4.8
Average SPG: 1.2
Average BPG: 0.9
Highest PPG: 30.1
Lowest PPG: 0.6
User chose to display the statistics in column format.

As shown in the table 'Jason Kidd' will be placed second in the table according to the alphabetical sorting.

The sixth feature of the program gives the user an opportunity to enter the first name of the NBA Hall of Famer that they want to be removed from the array. The program will provide the first names of players that are in the array so the user knows the options. If the user doesn't chose a name in the array then the question will prompt again.
A sample run of the program illustrates the above: 
Grant
Jason
John
Kevin
Kobe
Michael
Ray
Steve
Tim
Tracy
Yao
Of the players listed above what is the name of the player that you want to be deleted from the Hall Of Fame list*If you enter a name not on the list then you will be prompted again*: Tracy
User chose to remove an element from the array.

Once the user chooses a valid first name then they can type 1 into the menu so that a table of the updated players appear as shown below:
*Note: PPG = Points Per Game, RPG = Rebounds Per Game, APG = Assists Per Game, SPG = Steals Per Game, BPG = Blocks Per Game, FG% = Field Goal Percentage, 3P% = 3-Point Percentage, FT% = Freethrow Percentage*
PLAYER NAME         YEAR     GAMES       PPG       RPG       APG       SPG       BPG        FG%        3P%        FT%
Grant Hill          2018      1026      16.7       6.0       4.1       1.2       0.6      48.3%      31.4%      76.9%
Jason Kidd          1391        12       0.6       6.0       4.1       1.2       0.6      48.3%      31.4%      76.9%
John Stockton       2009      1504      13.1       2.7      10.5       2.2       0.2      51.5%      38.4%      82.6%
Kevin Garnett       2020      1462      17.8      10.0       3.7       1.3       1.4      49.7%      27.5%      78.9%
Kobe Bryant         2020      1346      25.0       5.2       4.7       1.4       0.5      44.7%      32.9%      83.7%
Michael Jordan      2009      1072      30.1       6.2       5.3       2.3       0.8      49.7%      32.7%      83.5%
Ray Allen           2018      1300      18.9       4.1       3.4       1.1       0.2      45.2%      40.0%      89.4%
Steve Nash          2018      1217      14.3       3.0       8.5       0.7       0.1      49.0%      42.8%      90.4%
Tim Duncan          2020      1392      19.0      10.8       3.0       0.7       2.2      50.6%      17.9%      69.6%
Yao Ming            2016       486      19.0       9.2       1.6       0.4       1.9      52.4%      20.0%      83.3%

Summary Analyses: 
Average Games: 1081.7
Average PPG: 17.5
Average RPG: 6.3
Average APG: 4.9
Average SPG: 1.2
Average BPG: 0.8
Highest PPG: 30.1
Lowest PPG: 0.6
User chose to display the statistics in column format.

This update table shows that the statistics of 'Tracy McGrady' have been deleted.

The user also has the option to type 6 into the menu in order to exit the program.
