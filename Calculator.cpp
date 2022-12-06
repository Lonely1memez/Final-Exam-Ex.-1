#include <iostream>

#include "Calculator.h"

using namespace std;

Calculator::Calculator()
{
  value = 0;
}

void Calculator::Add(double val)
{
  value += val;
}

void Calculator::Subtract(double val)
{
  value -= val;
}

void Calculator::Multiply(double val)
{
  value *= val;
}

void Calculator::Divide(double val)
{
  value /= val;
}

void Calculator::Clear()
{
  value = 0;
}

double Calculator::GetValue()
{
  return value;
}