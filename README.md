# The Monty Hall Problem

This is a problem in the area of probability that is loosely based on the TV game show *Let's Make a Deal*. The show originated in the 1960's and was hosted by Monty Hall, for whom the problem is named. A current version of the show is hosted by Wayne Brady.

In this problem, a game show contestant is presented with three doors and behind each door is a prize. Behind one door is a new car. Behind each of the other two doors is a goat. The contestant must pick one door and wins the prize behind that door. Of course, the contestant wishes to win the car. If the contestant wins a goat, it is said that the contestant is “zonked”.

There is, however, a bit of a twist to the game. After the contestant picks a door, Monty Hall (who knows which door hides the car) opens one of the two other doors and always reveals a goat. He then asks the contestant if they would like to keep their original door choice or swap their choice for the other door.

The question for this problem is as follows: When given the opportunity to swap doors after Monty Hall reveals a goat, are your better off staying with your original door choice, swapping to the other door, or does it not matter?

# This program will help you to study the probabilities of success of three possible strategies:

* 'k' = Keep the original door choice
* 's' = Switch to the other door
* 'r' = Flip a coin to choose between strategy 'k' or 's'

# Through the use of three possible options to run:

* Option 1 - Executes a loop that, with each iteration, prompts for strategy, calls monty(char), and reports the win/loss result.
* Option 2 - Prompts for a strategy and number of games, then calls month(char, int) and reports the returned number of wins.
* Option 3 - Runs 60000 simulations, 10000 times for each strategy calling monty(char), and once for each strategy calling month(char, int) with 10000 as the second parameter. It reports whether or not the results are within expected ranges (with a 5% margin of error).
