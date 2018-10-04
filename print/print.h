/* Simple console printing routines.
 *
 * (C) Copyright Martin Williams 2018
 *
 * Inspired by code from C++ Templates The Complete Guide, Second Edition, Vandevoorde, Josuttis, Gregor.
 *
 * Usage:
 *    print(arg1, arg2, arg3...)    Print the list of arguments to standard output.
 *
 *    println(arg1, arg2, arg3...)    Print the list of arguments to standard output with a newline at the end.
 */

#ifndef _PRINT_H_
#define _PRINT_H_

#include <iostream>


namespace misc {

template<typename Arg>
void print(Arg arg)
{
  std::cout << arg;
}


template<typename Arg, typename... Types>
void print(Arg firstArg, Types... otherArgs)
{
  print(firstArg);
  print(otherArgs...);
}


template<typename Arg>
void println(Arg arg)
{
  std::cout << arg << std::endl;
}


template<typename Arg, typename... Types>
void println(Arg firstArg, Types... otherArgs)
{
  print(firstArg);
  println(otherArgs...);
}

}

#endif

