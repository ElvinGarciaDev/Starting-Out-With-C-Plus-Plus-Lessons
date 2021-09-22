/*
 Program 5-5 calculates the number of soccer teams a youth league may create, based on a given number of players and a maximum number of players per team. The program uses while loops (in lines 25 through 34 and lines 41 through 46) to validate the user’s input.
 **/
// This program calculates the number of soccer teams
// that a youth league may create from the number of
// available players. Input validation is demonstrated
// with while loops.
#include <iostream>
using namespace std;

int main()
{

    //Constants for minimum and maxmium players
    const int min_players = 9, max_players = 15;
    
    //Variables
    int players,    //Number of avaliable players
    team_players,   //Number of desired players per team
    num_teams,      //Number of teams
    left_over;      //Number of players left over
    
    //Get the number of players per team.
    cout << "How many players do you wish per team: ";
    cin >> team_players;
    
    //Validate the input
    while (team_players < min_players || team_players > max_players)
    {
        //explain the error.
        cout << "You should habe at least " << min_players << " But no mroe than " << max_players << " per team.\n";
        
        //Get the input again.
        cout << "How many players do you wish per team: ";
        cin >> team_players;
    }
    
    //Get the number of players avaliable.
    cout << "How many players are avaliable: ";
    cin >> players;
    
    //Validate the input
    while (players <= 0)
    {
        cout << "Please enter 0 or greater: ";
        cin >> players;
    }
    
    //Calculate the number od teams.
    num_teams = players / team_players;
    
    //calculate the number of leftover players,
    left_over = players % team_players;
    
    //Display the result
    cout << "There will be " << num_teams << " teams with " << left_over << " players left over.\n";
    
    return 0;
}
