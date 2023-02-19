//Evan Pritchard
//CISC 125 Section 02
//Monty Hall Problem Assignment
//January 28, 2023

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Function to randomize the door with the car behind it
int door_randomizer()
{
  int winning_door = (rand() % 3) + 1;
  return (winning_door);
}

//Function to simulate one round of the game
bool monty(char strategy) 
{
  //Variable Declaration
  bool win_loss;
  int door_choice = (rand() % 3) + 1;
  int car = door_randomizer();

  //cases for strategy IF original door matches car
  if (door_choice == car)
  {
    switch (strategy)
    {
      case 'k':
        win_loss = true;
        break;
      case 's':
        win_loss = false;
        break;
      case 'r':
        win_loss = (rand() % 2); 
        break;
    }
  }
  //cases for strategy IF original door is zonk
  else if (door_choice != car)
  {
    switch (strategy)
    {
      case 'k':
        win_loss = false;
        break;
      case 's':
        win_loss = true;
        break;
      case 'r':
        win_loss = (rand() % 2); 
        break;
    }
  }
  //return bool value - 1 for win, 0 for loss
  return (win_loss);
}

//Function to simulate n rounds of the game
int monty(char strategy, int n_games) 
{
  int times_won = 0;

  //loop to run n games and count number of times won
  for (int i = 0; i < n_games; i++)
    {
     if (monty(strategy) == true) 
     {
       times_won++;
     }
    }
  
  return (times_won);
}
