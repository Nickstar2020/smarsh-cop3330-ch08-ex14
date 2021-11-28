/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Nicholas Smarsh
 */

#include "std_lib_facilities.h"

//constants are just another detail when defining a variable to make it more important

//we would want to declare a constant variable because some variables must never change, for instance pi is a number that should be considered a constant for a program, since it never changes whereas regular variables can change with mathmatical equations and whatnot.

//people dont do that often since certain numbers such as pi are widely known. So it would make more sense for varibles that are custom to the program to be constants.

//declaring a constant int in a void function example:
void f(const double n)
{
  //declared the constant var
  cout << n;
}

int main()
{
  const double pi = 3.14159;
  //call the function with the constant
  f(pi);
}
