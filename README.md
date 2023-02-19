# Monty-Hall-Problem[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-f4981d0f882b2a3f0472912d15f9806d57e124e0fc890972558857b51b24a6f9.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=9887893)
# The Monty Hall Problem

This is a problem in the area of probability that is loosely based on the TV game show *Let's Make a Deal*. The show originated in the 1960's and was hosted by Monty Hall, for whom the problem is named. A current version of the show is hosted by Wayne Brady.

In this problem, a game show contestant is presented with three doors and behind each door is a prize. Behind one door is a new car. Behind each of the other two doors is a goat. The contestant must pick one door and wins the prize behind that door. Of course, the contestant wishes to win the car. If the contestant wins a goat, it is said that the contestant is “zonked”.

There is, however, a bit of a twist to the game. After the contestant picks a door, Monty Hall (who knows which door hides the car) opens one of the two other doors and always reveals a goat. He then asks the contestant if they would like to keep their original door choice or swap their choice for the other door.

For a further explanation of this problem, please see these resources:

* [http://en.wikipedia.org/wiki/Monty_Hall_problem](http://en.wikipedia.org/wiki/Monty_Hall_problem)
* [http://www.youtube.com/watch?v=mhlc7peGlGg](http://www.youtube.com/watch?v=mhlc7peGlGg)

The question for this problem is as follows: When given the opportunity to swap doors after Monty Hall reveals a goat, are your better off staying with your original door choice, swapping to the other door, or does it not matter?

## Game Simulation

The references above approach the problem from a probability perspective. For this exercise, we will take a computer science approach in building a simulation of the game, then observe the results of the simulation. If implemented correctly, the simulation results should reflect the mathematical probablities for the problem.

For this exercise, create a *module* (a header and implementation file pair) that exposes two functions:

```C++
bool monty (char strategy);
int monty (char strategy, int n_games);
```

The first (one parameter) function should simulate a single round of the game. The simulation expects that the parameter given represents the player's strategy in the game. The strategy parameter will be given as follows:

* 'k' = Keep the original door choice
* 's' = Switch to the other door
* 'r' = Flip a coin to choose between strategy 'k' or 's'

The function is expected to return `bool` to indicate the contestant's result. A return value of `true` indicates the contestant won the car, where `false` indicates a zonk.

The second (two parameter) function is expected simulate the game a given number of times with a given strategy, and return `int` to indicate the number of times the contestant won the car.

## Test Program

A test program is provided for you. As such, you should focus on the module and the simulation of the game. Note that your simulation will not perform any interactive input or output; this is done by the test program.

There are two `TODO` comments in the program indicating adjustments you should make once you module is in place. You might consider first creating your module with two "stub" functions to be sure your module is structured properly, then proceed to coding the simulation.

The test program offers a menu of three options:

* Option 1 - Executes a loop that, with each iteration, prompts for strategy, calls monty(char), and reports the win/loss result.
* Option 2 - Prompts for a strategy and number of games, then calls month(char, int) and reports the returned number of wins.
* Option 3 - Runs 60000 simulations, 10000 times for each strategy calling monty(char), and once for each strategy calling month(char, int) with 10000 as the second parameter. It reports whether or not the results are within expected ranges (with a 5% margin of error).
