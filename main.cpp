// This is a test program for the Monty Hall Problem assignment. It provides options
// for testing your module.
// Test #1 allows you to call month(char) several times, using a different
//  strategy each time.
// Test #2 calls month(char, int) prompting for the two arguments
// Test #3 runs 60000 simulations, testing both functions with all three
//  strategies, and checks to see if results are within 5% of expected
//  probabilities.

#include "monty.h"

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void test1();
void test2();
void test3();

int main() {
  // Initialize the RNG
  srand(time(0));

  // Instructions
  cout << "Monty Hall Problem - Test Program\n\n";
  cout << "  1 = Test monty(char)\n";
  cout << "  2 = Test monty(char, int)\n";
  cout << "  3 = Automated tests\n\n";
  char option;
  cout << "Option: ";
  cin >> option;
  cout << endl;

  // Run selected test
  switch (option) {
    case '1': test1(); break;
    case '2': test2(); break;
    case '3': test3(); break;
  }
}

// Test 1 - Test monty(char) multiple times, prompting for strategy with each call
void test1() {
  char strategy;
  cout << "Enter strategy (k, s, or r), or q to quit: ";
  cin >> strategy;
  while (strategy != 'q') {
    if (strategy == 'k' || strategy == 's' || strategy == 'r')
      cout << "Contestant " << (monty(strategy) ? "won" : "lost") << ".\n\n";
    cout << "Enter strategy (k, s, or r), or q to quit: ";
    cin >> strategy;
  }
}

// Test 2 - Test monty(char, int) once, prompting for strategy and number of runs
void test2() {
  char strategy;
  int n_times;
  cout << "Enter strategy (k, s, or r), or q to quit: ";
  cin >> strategy;
  cout << "Enter number of simulations: ";
  cin >> n_times;
  if (strategy == 'k' || strategy == 's' || strategy == 'r')
    cout << "Contestant won " << monty(strategy, n_times) << " times.\n";
}

// Test 3 - Automated test of both functions
void test3() {
  int count1_k = 0;
  int count1_s = 0;
  int count1_r = 0;
  int count2_k = 0;
  int count2_s = 0;
  int count2_r = 0;

  // Run monty(char) 10000 times for each strategy
  for (int i = 0; i < 10000; i++) {
    if (monty('k')) count1_k++;
    if (monty('s')) count1_s++;
    if (monty('r')) count1_r++;
  }

  // Run monty(char, n_times) for each strategy
  count2_k = monty('k', 10000);
  count2_s = monty('s', 10000);
  count2_r = monty('r', 10000);

  // Output results
  cout << "Wins per strategy per 10000 test runs:\n";
  cout << "  k = " << count1_k << ' ' << count2_k << endl;
  cout << "  s = " << count1_s << ' ' << count2_s << endl;
  cout << "  r = " << count1_r << ' ' << count2_r << endl;

  cout << "Results are ";
  cout << ((
    labs(3333 - count1_k) < 250 && labs(3333 - count2_k) < 250 &&
    labs(6667 - count1_s) < 250 && labs(6667 - count2_s) < 250 &&
    labs(5000 - count1_r) < 250 && labs(5000 - count2_r) < 250) ?
      "within" : "OUTSIDE");
  cout << " the expected range.\n";
}
